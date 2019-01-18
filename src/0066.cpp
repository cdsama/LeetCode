#include "LeetCode.hpp"

/*
66. Plus One
Easy

Given a non-empty array of digits representing a non-negative integer, plus one
to the integer.

The digits are stored such that the most significant digit is at the head of the
list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number
0 itself.

Example 1:
    Input: [1,2,3]
    Output: [1,2,4]
    Explanation: The array represents the integer 123.

Example 2:
    Input: [4,3,2,1]
    Output: [4,3,2,2]
    Explanation: The array represents the integer 4321.

Tags:
    1. Array
    2. Math

Similar Questions:
    1. Multiply Strings
    2. Add Binary
    3. Plus One Linked List

*/

class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.empty()) {
            return {1};
        }
        bool carry = true;
        int count = static_cast<int>(digits.size());
        for (int i = count - 1; carry && i >= 0; --i) {
            carry = (((++digits[i]) %= 10) == 0);
        }
        if (carry) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

TEST_CASE("plus-one", "[66][Easy][array][math]") {
    Solution s;
    vector<pair<vector<int>, vector<int>>> tests = {
        {{1, 2, 3}, {1, 2, 4}},       {{4, 3, 2, 1}, {4, 3, 2, 2}},
        {{1, 9, 9, 9}, {2, 0, 0, 0}}, {{1, 9, 1, 9}, {1, 9, 2, 0}},
        {{9, 9, 9}, {1, 0, 0, 0}},    {{}, {1}}};
    for (auto& p : tests) {
        CHECK(s.plusOne(p.first) == p.second);
    }
}
