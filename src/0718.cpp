#include "LeetCode.hpp"

/*
718. Maximum Length of Repeated Subarray
Medium

Given two integer arrays A and B, return the maximum length of an subarray that appears in both arrays.
Example 1:

Input:
A: [1,2,3,2,1]
B: [3,2,1,4,7]
Output: 3
Explanation: 
The repeated subarray with maximum length is [3, 2, 1].

Note:

1 <= len(A), len(B) <= 1000
0 <= A[i], B[i] < 100

Tags: 
    1. Array
    2. Hash Table
    3. Binary Search
    4. Dynamic Programming

Similar Questions:
    1. Minimum Size Subarray Sum

Hint 1:
Use dynamic programming.  dp[i][j] will be the answer for inputs A[i:], B[j:].

*/

class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        
    }
};

TEST_CASE("maximum-length-of-repeated-subarray", "[718][Medium][array][hash-table][binary-search][dynamic-programming]") {
    //TODO
    CHECK(true);
}

