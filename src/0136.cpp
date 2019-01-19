#include "LeetCode.hpp"

/*
136. Single Number
Easy

Given a non-empty array of integers, every element appears twice except for one.
Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it
without using extra memory?

Example 1:
    Input: [2,2,1]
    Output: 1

Example 2:
    Input: [4,1,2,1,2]
    Output: 4

Tags:
    1. Hash Table
    2. Bit Manipulation

Similar Questions:
    1. Single Number II
    2. Single Number III
    3. Missing Number
    4. Find the Duplicate Number
    5. Find the Difference

*/

class Solution {
   public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (const auto i : nums) {
            result ^= i;
        }
        return result;
    }
};

TEST_CASE("single-number", "[136][Easy][hash-table][bit-manipulation]") {
    vector<pair<vector<int>, int>> tests = {
        {{2, 2, 1}, 1}, {{4, 1, 2, 1, 2}, 4}, {{1, 2, 3, 4, 5, 5, 4, 3, 1}, 2}};
    Solution s;
    for (auto&& p : tests) {
        CHECK(s.singleNumber(p.first) == p.second);
    }
}
