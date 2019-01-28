#include "LeetCode.hpp"

/*
15. 3Sum
Medium

Given an array nums of n integers, are there elements a, b, c in nums such that
a + b + c = 0? Find all unique triplets in the array which gives the sum of
zero. Note: The solution set must not contain duplicate triplets. Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]

Tags:
    1. Array
    2. Two Pointers

Similar Questions:
    1. Two Sum
    2. 3Sum Closest
    3. 4Sum
    4. 3Sum Smaller

*/

class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        if (nums.size() < 3) {
            return ret;
        }
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size() - 2; ++i) {
            int a = nums[i];
            if (a > 0) {
                break;
            }
            if (i > 0 && a == nums[i - 1]) {
                continue;
            }
            for (size_t j = i + 1, k = nums.size() - 1; j < k;) {
                int b = nums[j];
                int c = nums[k];
                int sum = a + b + c;
                if (sum == 0) {
                    ret.push_back({a, b, c});
                    while (j < k && b == nums[++j]) {
                    }
                    while (j < k && c == nums[--k]) {
                    }
                } else if (sum < 0) {
                    ++j;
                } else {
                    --k;
                }
            }
        }
        return ret;
    }
};

TEST_CASE("3sum", "[15][Medium][array][two-pointers]") {
    Solution s;
    vector<int> test = {-1, 0, 1, 2, -1, -4};
    auto ans = s.threeSum(test);
    CHECK(ans.size() == 2);
    for (const auto& arr : ans) {
        CHECK(arr[0] + arr[1] + arr[2] == 0);
    }
    vector<int> test2 = {0, 0, 0, 0};
    CHECK(s.threeSum(test2).size() == 1);
}
