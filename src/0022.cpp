#include "LeetCode.hpp"

/*
22. Generate Parentheses
Medium

Given n pairs of parentheses, write a function to generate all combinations of
well-formed parentheses.

For example, given n = 3, a solution set is:

[
  "((()))",
  "(()())",
  "(())()",
  "()(())",
  "()()()"
]

Tags:
    1. String
    2. Backtracking

Similar Questions:
    1. Letter Combinations of a Phone Number
    2. Valid Parentheses

*/

class Solution {
   public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        addParenthesis(result, "", n, 0);
        return result;
    }

    void addParenthesis(vector<string>& result, string&& s, int left,
                        int right) {
        if (left == 0 && right == 0) {
            result.push_back(s);
            return;
        }
        if (left > 0) {
            addParenthesis(result, s + "(", left - 1, right + 1);
        }
        if (right > 0) {
            addParenthesis(result, s + ")", left, right - 1);
        }
    }
};

TEST_CASE("generate-parentheses", "[22][Medium][string][backtracking]") {
    Solution s;
    auto result = s.generateParenthesis(3);
    decltype(result) answer = {"((()))", "(()())", "(())()", "()(())",
                               "()()()"};
    std::sort(result.begin(), result.end());
    std::sort(answer.begin(), answer.end());
    CHECK(result == answer);
}
