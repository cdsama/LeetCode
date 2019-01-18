#include "LeetCode.hpp"

/*
1. Two Sum
Easy

Given an array of integers, return indices of the two numbers such that they add
up to a specific target. You may assume that each input would have exactly one
solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

Tags:
    1. Array
    2. Hash Table

Similar Questions:
    1. 3Sum
    2. 4Sum
    3. Two Sum II - Input array is sorted
    4. Two Sum III - Data structure design
    5. Subarray Sum Equals K
    6. Two Sum IV - Input is a BST

*/

class Solution {
   public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> m;
        auto count = static_cast<int>(nums.size());
        m.reserve(count);
        for (int i = 0; i < count; ++i) {
            auto &numsi = nums[i];
            auto itr = m.find(target - numsi);
            if (itr != m.end()) {
                return {itr->second, i};
            }
            m[numsi] = i;
        }
        return {};
    }
};

TEST_CASE("two-sum", "[1][Easy][array][hash-table]") {
    Solution s;

    std::vector<int> v1{2, 7, 11, 15};
    CHECK((s.twoSum(v1, 9) == std::vector<int>{0, 1}));

    std::vector<int> v2{0, 4, 3, 0};
    CHECK((s.twoSum(v2, 0) == std::vector<int>{0, 3}));

    std::vector<int> v3{-3, 4, 3, 90};
    CHECK((s.twoSum(v3, 0) == std::vector<int>{0, 2}));
}
