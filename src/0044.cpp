#include "LeetCode.hpp"

/*
44. Wildcard Matching
Hard

Given an input string (s) and a pattern (p), implement wildcard pattern matching
with support for '?' and '*'.

'?' Matches any single character.
'*' Matches any sequence of characters (including the empty sequence).

The matching should cover the entire input string (not partial).
Note:

s could be empty and contains only lowercase letters a-z.
p could be empty and contains only lowercase letters a-z, and characters like ?
or *.

Example 1:

    Input:
    s = "aa"
    p = "a"
    Output: false
    Explanation: "a" does not match the entire string "aa".

Example 2:

    Input:
    s = "aa"
    p = "*"
    Output: true
    Explanation: '*' matches any sequence.

Example 3:

    Input:
    s = "cb"
    p = "?a"
    Output: false
    Explanation: '?' matches 'c', but the second letter is 'a', which does not
match 'b'.

Example 4:

    Input:
    s = "adceb"
    p = "*a*b"
    Output: true
    Explanation: The first '*' matches the empty sequence, while the second '*'
matches the substring "dce".

Example 5:

    Input:
    s = "acdcb"
    p = "a*c?b"
    Output: false

Tags:
    1. String
    2. Dynamic Programming
    3. Backtracking
    4. Greedy

Similar Questions:
    1. Regular Expression Matching

*/

class Solution {  // Backtracking & Greedy
   public:
    bool isMatch(string s, string p) {
        size_t ss = s.size();
        size_t ps = p.size();
        size_t si = 0;
        size_t pi = 0;
        size_t sm = 0;
        size_t star = string::npos;
        while (si < ss) {
            if (pi < ps && (p[pi] == '?' || s[si] == p[pi])) {
                ++pi;
                ++si;
            } else if (pi < ps && p[pi] == '*') {
                star = (pi++);
                sm = si;
            } else if (star != string::npos) {
                pi = star + 1;
                si = (++sm);
            } else {
                return false;
            }
        }
        for (; pi < ps && p[pi] == '*'; ++pi) {
        }
        return pi == ps;
    }
};

void printtable(vector<vector<bool>>& dp, const string& s, const string& p) {
    cout << "    ";
    for (const auto& c : p) {
        cout << c << " ";
    }
    cout << endl;
    int i = -1;
    for (const auto& m : dp) {
        cout << (i == -1 ? (i++, ' ') : s[i++]) << " ";
        for (const auto& n : m) {
            cout << n << " ";
        }
        cout << endl;
    }
}

class Solution2 {  // DP
   public:
    bool isMatch(string s, string p) {
        // cout << "------" << endl;
        int m = static_cast<int>(s.size());
        int n = static_cast<int>(p.size());
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        dp[0][0] = true;
        for (int i = 1; i <= n; ++i) {
            if (p[i - 1] == '*') {
                dp[0][i] = dp[0][i - 1];
            }
        }
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (p[j - 1] == '*') {
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
                } else {
                    dp[i][j] = (s[i - 1] == p[j - 1] || p[j - 1] == '?') &&
                               dp[i - 1][j - 1];
                }
            }
        }
        // printtable(dp, s, p);
        return dp[m][n];
    }
};

TEST_CASE("wildcard-matching",
          "[44][Hard][string][dynamic-programming][backtracking][greedy]") {
    {
        Solution s;
        CHECK(s.isMatch("aa", "a") == false);
        CHECK(s.isMatch("aa", "*") == true);
        CHECK(s.isMatch("cb", "?a") == false);
        CHECK(s.isMatch("adceb", "*a*b") == true);
        CHECK(s.isMatch("acdcb", "a*c?b") == false);
    }
    {
        Solution2 s;
        CHECK(s.isMatch("aa", "a") == false);
        CHECK(s.isMatch("aa", "*") == true);
        CHECK(s.isMatch("cb", "?a") == false);
        CHECK(s.isMatch("adceb", "*a*b") == true);
        CHECK(s.isMatch("acdcb", "a*c?b") == false);
    }
}
