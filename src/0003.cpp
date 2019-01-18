#include "LeetCode.hpp"

/*
3. Longest Substring Without Repeating Characters
Medium

Given a string, find the length of the longest substring without repeating
characters.

Example 1:
    Input: "abcabcbb"
    Output: 3
    Explanation: The answer is "abc", with the length of 3.

Example 2:
    Input: "bbbbb"
    Output: 1
    Explanation: The answer is "b", with the length of 1.

Example 3:
    Input: "pwwkew"
    Output: 3
    Explanation: The answer is "wke", with the length of 3.

Note that the answer must be a substring, "pwke" is a subsequence and not a
substring.

Tags:
    1. Hash Table
    2. Two Pointers
    3. String

Similar Questions:
    1. Longest Substring with At Most Two Distinct Characters

*/

class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int l = static_cast<int>(s.length());
        if (l < 2) {
            return l;
        }

        vector<int> m(256, -1);
        int ms = 0;

        for (int i = 0, j = -1; i < l; i++) {
            char c = s[i];
            auto &it = m[c];
            if (it > j) {
                j = it;
            }
            it = i;
            ms = max(ms, i - j);
        }

        return ms;
    }
};

TEST_CASE("longest-substring-without-repeating-characters",
          "[3][Medium][hash-table][two-pointers][string]") {
    Solution s;
    CHECK(s.lengthOfLongestSubstring("") == 0);
    CHECK(s.lengthOfLongestSubstring("a") == 1);
    CHECK(s.lengthOfLongestSubstring("ab") == 2);
    CHECK(s.lengthOfLongestSubstring("abcabcbb") == 3);
    CHECK(s.lengthOfLongestSubstring("bbbbb") == 1);
    CHECK(s.lengthOfLongestSubstring("pwwkew") == 3);
}
