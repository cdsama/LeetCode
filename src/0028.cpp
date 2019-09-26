#include "LeetCode.hpp"

/*
28. Implement strStr()
Easy

Implement strStr().
Return the index of the first occurrence of needle in haystack, or -1 if needle
is not part of haystack. Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2

Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1

Clarification:
What should we return when needle is an empty string? This is a great question
to ask during an interview. For the purpose of this problem, we will return 0
when needle is an empty string. This is consistent to C's strstr() and Java's
indexOf().

Tags:
    1. Two Pointers
    2. String

Similar Questions:
    1. Shortest Palindrome
    2. Repeated Substring Pattern

*/

class Solution {  // Brute-Force
   public:
    int strStr(string haystack, string needle) {
        int nn = static_cast<int>(needle.size());
        if (nn == 0) {
            return 0;
        }
        int nh = static_cast<int>(haystack.size());
        if (nn > nh) {
            return -1;
        }
        for (int i = 0; i < nh; ++i) {
            int j = 0;
            for (; j < nn; ++j) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == nn) {
                return i;
            }
        }
        return -1;
    }
};

class Solution2 {  // Sunday
   public:
    int strStr(string haystack, string needle) {
        const int nn = static_cast<int>(needle.size());
        if (nn == 0) {
            return 0;
        }
        const int nh = static_cast<int>(haystack.size());
        if (nn > nh) {
            return -1;
        }
        vector<int> shift(256, nn + 1);
        for (int i = 0; i < nn; ++i) {
            shift[needle[i]] = nn - i;   // last order in str
        }
        int s = 0;
        while (s <= nh - nn) {
            int j = 0;
            while (haystack[s + j] == needle[j]) {
                ++j;
                if (j >= nn) {
                    return s;
                }
            }
            s += shift[haystack[s + nn]];
        }
        return -1;
    }
};

class Solution3 {  // KMP
   public:
    int strStr(string haystack, string needle) {
        const int nn = static_cast<int>(needle.size());
        if (nn == 0) {
            return 0;
        }
        const int nh = static_cast<int>(haystack.size());
        if (nn > nh) {
            return -1;
        }
        vector<int> next(nn, 0);
        next[0] = -1;
        for (int i = 1, len = 0; i < nn - 1;) {
            if (needle[i] == needle[len]) {  // DP 
                len++;
                next[i + 1] = len;
                i++;
            } else {
                if (len > 0) {
                    len = next[len];
                } else {
                    next[i + 1] = len;
                    i++;
                }
            }
        }
        int s = 0;
        while (s <= nh - nn) {
            int j = 0;
            for (int i = j; i < nn; i++) {
                if (haystack[s + j] == needle[j]) {
                    ++j;
                } else {
                    s += j - next[j];
                    j = next[j];
                    break;
                }
            }
            if (j == nn) {
                return s;
            }
        }
        return -1;
    }
};

TEST_CASE("implement-strstr", "[28][Easy][two-pointers][string]") {
    {
        Solution s;
        CHECK(s.strStr("hello", "ll") == 2);
        CHECK(s.strStr("aaaaa", "bba") == -1);
        CHECK(s.strStr("aaaaa", "aaaaaaaaa") == -1);
        CHECK(s.strStr("aaaaa", "") == 0);
        CHECK(s.strStr("aaaaaaaab", "aaab") == 5);
        CHECK(s.strStr("ababaababcaaa", "ababc") == 5);
    }
    {
        Solution2 s;
        CHECK(s.strStr("hello", "ll") == 2);
        CHECK(s.strStr("aaaaa", "bba") == -1);
        CHECK(s.strStr("aaaaa", "aaaaaaaaa") == -1);
        CHECK(s.strStr("aaaaa", "") == 0);
        CHECK(s.strStr("aaaaaaaab", "aaab") == 5);
        CHECK(s.strStr("ababaababcaaa", "ababc") == 5);
    }
    {
        Solution3 s;
        CHECK(s.strStr("hello", "ll") == 2);
        CHECK(s.strStr("aaaaa", "bba") == -1);
        CHECK(s.strStr("aaaaa", "aaaaaaaaa") == -1);
        CHECK(s.strStr("aaaaa", "") == 0);
        CHECK(s.strStr("aaaaaaaab", "aaab") == 5);
        CHECK(s.strStr("ababaababcaaa", "ababc") == 5);
    }
}
