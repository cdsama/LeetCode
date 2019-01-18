#include "LeetCode.hpp"

/*
14. Longest Common Prefix
Easy

Write a function to find the longest common prefix string amongst an array of
strings.

If there is no common prefix, return an empty string "".

Example 1:
    Input: ["flower","flow","flight"]
    Output: "fl"

Example 2:
    Input: ["dog","racecar","car"]
    Output: ""
    Explanation: There is no common prefix among the input strings.

Note:
All given inputs are in lowercase letters a-z.

Tags:
    1. String

*/

class Solution {
   public:
    string longestCommonPrefix(vector<string> &strs) {
        string prefix;
        if (strs.empty()) {
            return prefix;
        }
        auto &str0 = strs[0];
        if (strs.size() == 1) {
            return str0;
        }
        auto str0size = str0.size();
        auto strssize = strs.size();
        for (size_t i = 0; i < str0size; i++) {
            auto ch = str0[i];
            for (size_t j = 1; j < strssize; j++) {
                auto &strj = strs[j];
                if (i > strj.size() || (strj[i] != ch)) {
                    return prefix;
                }
            }
            prefix.push_back(ch);
        }

        return prefix;
    }
};

TEST_CASE("longest-common-prefix", "[14][Easy][string]") {
    Solution s;
    using tests = vector<pair<vector<string>, string>>;
    tests strs = {{{"flower", "flow", "flight"}, "fl"},
                  {{"dog", "racecar", "car"}, ""},
                  {{"dog"}, "dog"},
                  {{}, ""}};

    for (auto &p : strs) {
        CHECK(s.longestCommonPrefix(p.first) == p.second);
    }
}
