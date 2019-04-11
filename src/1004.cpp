#include "LeetCode.hpp"

/*
1004. Max Consecutive Ones III
Medium

Given an array A of 0s and 1s, we may change up to K values from 0 to 1.
Return the length of the longest (contiguous) subarray that contains only 1s. 
 

Example 1:

Input: A = [1,1,1,0,0,0,1,1,1,1,0], K = 2
Output: 6
Explanation: 
[1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1.  The longest subarray is underlined.

Example 2:

Input: A = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], K = 3
Output: 10
Explanation: 
[0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1.  The longest subarray is underlined.

 
Note:

1 <= A.length <= 20000
0 <= K <= A.length
A[i] is 0 or 1 

Tags: 
    1. Two Pointers
    2. Sliding Window

Similar Questions:
    1. Longest Substring with At Most K Distinct Characters
    2. Longest Repeating Character Replacement
    3. Max Consecutive Ones
    4. Max Consecutive Ones II

*/

class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        
    }
};

TEST_CASE("max-consecutive-ones-iii", "[1004][Medium][two-pointers][sliding-window]") {
    //TODO
    CHECK(true);
}

