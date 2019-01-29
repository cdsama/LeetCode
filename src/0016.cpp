#include "LeetCode.hpp"

/*
16. 3Sum Closest
Medium

Given an array nums of n integers and an integer target, find three integers in
nums such that the sum is closest to target. Return the sum of the three
integers. You may assume that each input would have exactly one solution.
Example:

Given array nums = [-1, 2, 1, -4], and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

Tags:
    1. Array
    2. Two Pointers

Similar Questions:
    1. 3Sum
    2. 3Sum Smaller

*/

class Solution {
   public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ret = 0;
        if (nums.size() < 4) {
            for (auto&& i : nums) {
                ret += i;
            }
            return ret;
        }
        sort(nums.begin(), nums.end());
        int delta = numeric_limits<int>::max();
        for (size_t i = 0; i < nums.size() - 2; ++i) {
            int a = nums[i];
            if (i > 0 && a == nums[i - 1]) {
                continue;
            }
            for (size_t j = i + 1, k = nums.size() - 1; j < k;) {
                int b = nums[j];
                int c = nums[k];
                int sum = a + b + c;
                if (sum == target) {
                    return target;
                } else {
                    int d = abs(sum - target);
                    if (d < delta) {
                        delta = d;
                        ret = sum;
                    }
                    if (sum < target) {
                        ++j;
                    } else {
                        --k;
                    }
                }
            }
        }
        return ret;
    }
};

TEST_CASE("3sum-closest", "[16][Medium][array][two-pointers]") {
    Solution s;
    {
        vector<int> test = {-1, 2, 1, -4};
        CHECK(s.threeSumClosest(test, 1) == 2);
    }
    {
        vector<int> test = {1, 1, 1, 1};
        CHECK(s.threeSumClosest(test, 0) == 3);
    }
}
