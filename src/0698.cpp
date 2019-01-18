#include "LeetCode.hpp"

/*
698. Partition to K Equal Sum Subsets
Medium

Given an array of integers nums and a positive integer k, find whether it's possible to divide this array into k non-empty subsets whose sums are all equal.

Example 1:

Input: nums = [4, 3, 2, 3, 5, 2, 1], k = 4
Output: True
Explanation: It's possible to divide it into 4 subsets (5), (1, 4), (2,3), (2,3) with equal sums.

Note:

1 <= k <= len(nums) <= 16.
0 < nums[i] < 10000.

Tags: 
    1. Dynamic Programming
    2. Recursion

Similar Questions:
    1. Partition Equal Subset Sum

Hint 1:
We can figure out what target each subset must sum to.  Then, let's recursively search, where at each call to our function, we choose which of k subsets the next value will join.

*/

class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        
    }
};

TEST_CASE("partition-to-k-equal-sum-subsets", "[698][Medium][dynamic-programming][recursion]") {
    //TODO
    CHECK(true);
}

