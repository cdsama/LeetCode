#include "LeetCode.hpp"

/*
17. Letter Combinations of a Phone Number
Medium

Given a string containing digits from 2-9 inclusive, return all possible letter
combinations that the number could represent. A mapping of digit to letters
(just like on the telephone buttons) is given below. Note that 1 does not map to
any letters.

Example:

Input: "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].

Note:
Although the above answer is in lexicographical order, your answer could be in
any order you want.

Tags:
    1. String
    2. Backtracking

Similar Questions:
    1. Generate Parentheses
    2. Combination Sum
    3. Binary Watch

*/

class Solution {
   public:
    vector<string> letterCombinations(string digits) {
        static map<char, vector<char>> dict = {
            {'2', {'a', 'b', 'c'}}, {'3', {'d', 'e', 'f'}},
            {'4', {'g', 'h', 'i'}}, {'5', {'j', 'k', 'l'}},
            {'6', {'m', 'n', 'o'}}, {'7', {'p', 'q', 'r', 's'}},
            {'8', {'t', 'u', 'v'}}, {'9', {'w', 'x', 'y', 'z'}},
        };
        //
        size_t count = 1;
        for (const auto d : digits) {
            count *= (dict[d].size());
        }
        vector<string> ret;
        ret.reserve(count);

        for (const auto d : digits) {
            if (ret.empty()) {
                for (const auto i : dict[d]) {
                    string s;
                    s.reserve(digits.size());
                    s.push_back(i);
                    ret.push_back(move(s));
                }
            } else {
                size_t ret_size = ret.size();
                auto& arr = dict[d];
                for (size_t i = 1; i < arr.size(); ++i) {
                    for (size_t j = 0; j < ret_size; ++j) {
                        ret.push_back(ret[j]);
                    }
                }
                for (size_t i = 0; i < arr.size(); ++i) {
                    for (size_t j = 0; j < ret_size; ++j) {
                        ret[i * ret_size + j].push_back(arr[i]);
                    }
                }
            }
        }
        return ret;
    }
};

TEST_CASE("letter-combinations-of-a-phone-number",
          "[17][Medium][string][backtracking]") {
    Solution s;
    vector<string> key = {"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};
    vector<string> ans = s.letterCombinations("23");
    sort(key.begin(), key.end());
    sort(ans.begin(), ans.end());
    CHECK(key == ans);
}
