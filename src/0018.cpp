#include "LeetCode.hpp"

/*
18. 4Sum
Medium

Given an array nums of n integers and an integer target, are there elements a,
b, c, and d in nums such that a + b + c + d = target? Find all unique
quadruplets in the array which gives the sum of target. Note: The solution set
must not contain duplicate quadruplets. Example:

Given array nums = [1, 0, -1, 0, -2, 2], and target = 0.

A solution set is:
[
  [-1,  0, 0, 1],
  [-2, -1, 1, 2],
  [-2,  0, 0, 2]
]

Tags:
    1. Array
    2. Hash Table
    3. Two Pointers

Similar Questions:
    1. Two Sum
    2. 3Sum
    3. 4Sum II

*/

class Solution {
   public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ret;
        int n = static_cast<int>(nums.size());
        if (n < 4) {
            return ret;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            if (nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) {
                break;
            }
            if (nums[i] + nums[n - 3] + nums[n - 2] + nums[n - 1] < target) {
                continue;
            }
            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                if (nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target) {
                    break;
                }
                if (nums[i] + nums[j] + nums[n - 2] + nums[n - 1] < target) {
                    continue;
                }
                int left = j + 1, right = n - 1;
                while (left < right) {
                    int sum = nums[left] + nums[right] + nums[i] + nums[j];
                    if (sum < target) {
                        left++;
                    } else if (sum > target) {
                        right--;
                    } else {
                        ret.push_back(vector<int>{nums[i], nums[j],
                                                    nums[left], nums[right]});
                        do {
                            left++;
                        } while (nums[left] == nums[left - 1] && left < right);
                        do {
                            right--;
                        } while (nums[right] == nums[right + 1] &&
                                 left < right);
                    }
                }
            }
        }
        return ret;
    }
};

set<vector<int>> convert(vector<vector<int>> v) {
    set<vector<int>> s;
    for (auto&& i : v) {
        sort(i.begin(), i.end());
        s.insert(i);
    }
    return s;
}

TEST_CASE("4sum", "[18][Medium][array][hash-table][two-pointers]") {
    Solution s;
    {
        vector<vector<int>> key = {
            {-1, 0, 0, 1}, {-2, -1, 1, 2}, {-2, 0, 0, 2}};
        vector<int> nums = {1, 0, -1, 0, -2, 2};
        vector<vector<int>> ans = s.fourSum(nums, 0);
        CHECK(key.size() == ans.size());
        CHECK(convert(key) == convert(ans));
    }
    {
        vector<vector<int>> key = {
            {-3, -2, 2, 3}, {-3, -1, 1, 3}, {-3, 0, 0, 3}, {-3, 0, 1, 2},
            {-2, -1, 0, 3}, {-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}};
        vector<int> nums = {-3, -2, -1, 0, 0, 1, 2, 3};
        vector<vector<int>> ans = s.fourSum(nums, 0);
        CHECK(key.size() == ans.size());
        CHECK(convert(key) == convert(ans));
    }
}
