#include "LeetCode.hpp"

/*
1043. Partition Array for Maximum Sum
Medium

Given an integer array A, you partition the array into (contiguous) subarrays of length at most K.  After partitioning, each subarray has their values changed to become the maximum value of that subarray.
Return the largest sum of the given array after partitioning.
 
Example 1:

Input: A = [1,15,7,9,2,5,10], K = 3
Output: 84
Explanation: A becomes [15,15,15,9,10,10,10]
 
Note:

1 <= K <= A.length <= 500
0 <= A[i] <= 10^6

Tags: 
    1. Graph

Hint 1:
Think dynamic programming:  dp[i] will be the answer for array A[0], ..., A[i-1].

Hint 2:
For j = 1 .. k that keeps everything in bounds, dp[i] is the maximum of dp[i-j] + max(A[i-1], ..., A[i-j]) * j .

*/

class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& A, int K) {
        
    }
};

TEST_CASE("partition-array-for-maximum-sum", "[1043][Medium][graph]") {
    //TODO
    CHECK(true);
}

