#include "LeetCode.hpp"

/*
713. Subarray Product Less Than K
Medium

Your are given an array of positive integers nums.
Count and print the number of (contiguous) subarrays where the product of all the elements in the subarray is less than k.
Example 1:

Input: nums = [10, 5, 2, 6], k = 100
Output: 8
Explanation: The 8 subarrays that have product less than 100 are: [10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6].
Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.

Note:
0 < nums.length <= 50000.
0 < nums[i] < 1000.
0 <= k < 10^6.

Tags: 
    1. Array
    2. Two Pointers

Similar Questions:
    1. Maximum Product Subarray
    2. Maximum Size Subarray Sum Equals k
    3. Subarray Sum Equals K

Hint 1:
For each j, let opt(j) be the smallest i so that nums[i] * nums[i+1] * ... * nums[j] is less than k.  opt is an increasing function.

*/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
    }
};

TEST_CASE("subarray-product-less-than-k", "[713][Medium][array][two-pointers]") {
    //TODO
    CHECK(true);
}

