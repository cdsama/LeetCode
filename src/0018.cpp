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
        if (nums.size() < 4) {
            return ret;
        }
        sort(nums.begin(), nums.end());
        size_t count = nums.size();
        std::unordered_map<int, vector<pair<size_t, size_t>>> cache;
        for (size_t i = 0; i < count - 1; ++i) {
            for (size_t j = i + 1; j < count; ++j) {
                int index = target - nums[i] - nums[j];
                auto& cache_index = cache[index];
                cache_index.push_back({i, j});
            }
        }
        for (size_t i = 0; i < count - 1; ++i) {
            for (size_t j = i + 1; j < count; ++j) {
                int temp = nums[i] + nums[j];
                auto& res = cache[temp];
                for (auto itr = res.begin(); itr != res.end(); ++itr) {
                    if (itr->first != i && itr->first != j &&
                        itr->second != i && itr->second != j &&
                        (i < j && j < itr->first && itr->first < itr->second)) {
                        ret.push_back({nums[i], nums[j], nums[itr->first],
                                       nums[itr->second]});
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
