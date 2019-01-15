#include "LeetCode.hpp"

class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        nums.resize(unique(nums.begin(), nums.end()) - nums.begin());
        return static_cast<int>(nums.size());
    }
};

class Solution2 {
   public:
    int removeDuplicates(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        if (n < 2) {
            return n;
        }
        int id = 1;
        for (int i = 1; i < n; ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[id++] = nums[i];
            }
        }
        return id;
    }
};

TEST_CASE("Remove Duplicates from Sorted Array") {
    vector<pair<vector<int>, vector<int>>> tests = {
        {{}, {}},
        {{1}, {1}},
        {{1, 1, 2}, {1, 2}},
        {{0, 0, 1, 1, 1, 2, 2, 3, 3, 4}, {0, 1, 2, 3, 4}}};
    {
        Solution s;
        auto tests_copy = tests;
        for (auto& p : tests_copy) {
            p.first.resize(s.removeDuplicates(p.first));
            CHECK(p.first == p.second);
        }
    }
    {
        Solution2 s;
        auto tests_copy = tests;
        for (auto& p : tests_copy) {
            p.first.resize(s.removeDuplicates(p.first));
            CHECK(p.first == p.second);
        }
    }
}