#include "LeetCode.hpp"

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

TEST_CASE("Longest Substring Without Repeating Characters",
          "longest-substring-without-repeating-characters") {
    Solution s;
    CHECK(s.lengthOfLongestSubstring("") == 0);
    CHECK(s.lengthOfLongestSubstring("a") == 1);
    CHECK(s.lengthOfLongestSubstring("ab") == 2);
    CHECK(s.lengthOfLongestSubstring("abcabcbb") == 3);
    CHECK(s.lengthOfLongestSubstring("bbbbb") == 1);
    CHECK(s.lengthOfLongestSubstring("pwwkew") == 3);
}