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

class Solution {
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

TEST_CASE("wildcard-matching",
          "[44][Hard][string][dynamic-programming][backtracking][greedy]") {
    Solution s;
    CHECK(s.isMatch("aa", "a") == false);
    CHECK(s.isMatch("aa", "*") == true);
    CHECK(s.isMatch("cb", "?a") == false);
    CHECK(s.isMatch("adceb", "*a*b") == true);
    CHECK(s.isMatch("acdcb", "a*c?b") == false);
}
