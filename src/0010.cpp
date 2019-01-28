#include "LeetCode.hpp"

/*
10. Regular Expression Matching
Hard

Given an input string (s) and a pattern (p), implement regular expression
matching with support for '.' and '*'.

'.' Matches any single character.
'*' Matches zero or more of the preceding element.

The matching should cover the entire input string (not partial).
Note:

s could be empty and contains only lowercase letters a-z.
p could be empty and contains only lowercase letters a-z, and characters like .
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
    p = "a*"
    Output: true
    Explanation: '*' means zero or more of the precedeng element, 'a'.
Therefore, by repeating 'a' once, it becomes "aa".

Example 3:
    Input:
    s = "ab"
    p = ".*"
    Output: true
    Explanation: ".*" means "zero or more (*) of any character (.)".

Example 4:
    Input:
    s = "aab"
    p = "c*a*b"
    Output: true
    Explanation: c can be repeated 0 times, a can be repeated 1 time. Therefore
it matches "aab".

Example 5:
    Input:
    s = "mississippi"
    p = "mis*is*p*."
    Output: false

Tags:
    1. String
    2. Dynamic Programming
    3. Backtracking

Similar Questions:
    1. Wildcard Matching

*/

class Solution {
   public:
    bool isMatch(string s, string p) {
        if (p.empty()) {
            return s.empty();
        }
        vector<pair<char, bool>> pattern;
        for (auto ch : p) {
            if (ch == '*') {
                pattern.back().second = true;
            } else {
                pattern.push_back({ch, false});
            }
        }
        size_t m = s.size();
        size_t n = pattern.size();
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        dp[0][0] = true;
        for (size_t i = 1; i <= pattern.size(); ++i) {
            if (pattern[i - 1].second) {
                dp[0][i] = dp[0][i - 1];
            }
        }
        for (size_t i = 1; i <= m; ++i) {
            for (size_t j = 1; j <= n; ++j) {
                dp[i][j] = (((s[i - 1] == pattern[j - 1].first) ||
                             (pattern[j - 1].first == '.')) &&
                            ((dp[i - 1][j - 1]) ||
                             ((pattern[j - 1].second) && dp[i - 1][j]))) ||
                           ((pattern[j - 1].second) && dp[i][j - 1]);
            }
        }
        return dp[m][n];
    }
};

class Solution2 {
   public:
    bool isMatch(string s, string p) {
        size_t m = s.size();
        size_t n = p.size();
        vector<bool> dp(n + 1, false);
        for (size_t i = 0; i <= m; i++) {
            bool pre = dp[0];
            dp[0] = (i == 0);
            for (size_t j = 1; j <= n; ++j) {
                bool temp = dp[j];
                if (p[j - 1] == '*') {
                    dp[j] = (dp[j - 2] ||
                             (i > 0 && dp[j] &&
                              (s[i - 1] == p[j - 2] || p[j - 2] == '.')));
                } else {
                    dp[j] = (i > 0 && pre &&
                             (s[i - 1] == p[j - 1] || p[j - 1] == '.'));
                }
                pre = temp;
            }
        }
        return dp[n] == 1;
    }
};

TEST_CASE("regular-expression-matching",
          "[10][Hard][string][dynamic-programming][backtracking]") {
    {
        Solution s;
        CHECK(s.isMatch("aa", "a") == false);
        CHECK(s.isMatch("aa", "a*") == true);
        CHECK(s.isMatch("ab", ".*") == true);
        CHECK(s.isMatch("aab", "c*a*b") == true);
        CHECK(s.isMatch("mississippi", "mis*is*p*.") == false);
        CHECK(s.isMatch("aaa", "ab*ac*a") == true);
    }
    {
        Solution2 s;
        CHECK(s.isMatch("aa", "a") == false);
        CHECK(s.isMatch("aa", "a*") == true);
        CHECK(s.isMatch("ab", ".*") == true);
        CHECK(s.isMatch("aab", "c*a*b") == true);
        CHECK(s.isMatch("mississippi", "mis*is*p*.") == false);
        CHECK(s.isMatch("aaa", "ab*ac*a") == true);
    }
}
