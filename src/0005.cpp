#include "LeetCode.hpp"

/*
5. Longest Palindromic Substring
Medium

Given a string s, find the longest palindromic substring in s. You may assume
that the maximum length of s is 1000.

Example 1:
    Input: "babad"
    Output: "bab"
    Note: "aba" is also a valid answer.

Example 2:
    Input: "cbbd"
    Output: "bb"

Tags:
    1. String
    2. Dynamic Programming

Similar Questions:
    1. Shortest Palindrome
    2. Palindrome Permutation
    3. Palindrome Pairs
    4. Longest Palindromic Subsequence
    5. Palindromic Substrings

Hint 1:
How can we reuse a previously computed palindrome to compute a larger
palindrome?

Hint 2:
If “aba” is a palindrome, is “xabax” and palindrome? Similarly is “xabay” a
palindrome?

Hint 3:
Complexity based hint:
If we use brute-force and check whether for every start and end position a
substring is a palindrome we have O(n^2) start - end pairs and O(n) palindromic
checks. Can we reduce the time for palindromic checks to O(1) by reusing some
previous computation.

*/

class Solution {  // travel O(n^2) 4ms
   public:
    string longestPalindrome(string s) {
        int size = static_cast<int>(s.size());
        if (size < 2) {
            return s;
        } else if (size == 2) {
            if (s[0] == s[1]) {
                return s;
            } else {
                return s.substr(0, 1);
            }
        }
        int left_max = 0;
        int right_max = 0;
        int length_max = 1;
        for (int i = 0; i < size; ++i) {
            bool odd = true;
            bool even = true;
            if (min(i + 1, size - i) * 2 <= length_max) {
                continue;
            }
            for (int eleft = i, right = i + 1; (eleft >= 0) && (right < size);
                 --eleft, ++right) {
                if (odd) {
                    int left = eleft - 1;
                    if ((left >= 0) && (s[left] == s[right])) {
                        if (int l = (right - left + 1); l > length_max) {
                            length_max = l;
                            left_max = left;
                            right_max = right;
                        }
                    } else {
                        odd = false;
                    }
                }
                if (even) {
                    if ((s[eleft] == s[right])) {
                        if (int l = (right - eleft + 1); l > length_max) {
                            length_max = l;
                            left_max = eleft;
                            right_max = right;
                        }
                    } else {
                        even = false;
                    }
                }
                if (!(odd || even)) {
                    break;
                }
            }
        }
        return s.substr(left_max, length_max);
    }
};

class Solution2 {  // DP O(n^2) 28ms
   public:
    string longestPalindrome(string s) {
        int size = static_cast<int>(s.size());
        if (size < 2) {
            return s;
        } else if (size == 2) {
            if (s[0] == s[1]) {
                return s;
            } else {
                return s.substr(0, 1);
            }
        }
        int dpsize = size * size * sizeof(bool);
        bool* dp = (bool*)alloca(dpsize);
        int left_max = 0;
        int right_max = 0;
        int length_max = 1;
        int l = 0;
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < i; ++j) {
                if (dp[j * size + i] =
                        (s[j] == s[i]) &&
                        ((i - j < 2) || dp[(j + 1) * size + i - 1]);
                    dp[j * size + i] && (l = i - j + 1) > length_max) {
                    length_max = l;
                    left_max = j;
                    right_max = i;
                }
            }
            dp[i * size + i] = true;
        }
        return s.substr(left_max, length_max);
    }
};

TEST_CASE("longest-palindromic-substring",
          "[5][Medium][string][dynamic-programming]") {
    {
        Solution s;
        CHECK(s.longestPalindrome("") == "");
        CHECK(s.longestPalindrome("a") == "a");
        CHECK(s.longestPalindrome("aa") == "aa");
        CHECK(s.longestPalindrome("ab") == "a");
        CHECK(s.longestPalindrome("aaa") == "aaa");
        CHECK(s.longestPalindrome("aab") == "aa");
        CHECK(s.longestPalindrome("babad") == "bab");
        CHECK(s.longestPalindrome("cbbd") == "bb");
        CHECK(s.longestPalindrome("yrtuisabcdefgfedcbarkejhgb") ==
              "abcdefgfedcba");
    }
    {
        Solution2 s;
        CHECK(s.longestPalindrome("") == "");
        CHECK(s.longestPalindrome("a") == "a");
        CHECK(s.longestPalindrome("aa") == "aa");
        CHECK(s.longestPalindrome("ab") == "a");
        CHECK(s.longestPalindrome("aaa") == "aaa");
        CHECK(s.longestPalindrome("aab") == "aa");
        CHECK(s.longestPalindrome("babad") == "bab");
        CHECK(s.longestPalindrome("cbbd") == "bb");
        CHECK(s.longestPalindrome("yrtuisabcdefgfedcbarkejhgb") ==
              "abcdefgfedcba");
    }
}
