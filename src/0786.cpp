#include "LeetCode.hpp"

/*
786. K-th Smallest Prime Fraction
Hard

A sorted list A contains 1, plus some number of primes.  Then, for every p < q in the list, we consider the fraction p/q.
What is the K-th smallest fraction considered?  Return your answer as an array of ints, where answer[0] = p and answer[1] = q.

Examples:
Input: A = [1, 2, 3, 5], K = 3
Output: [2, 5]
Explanation:
The fractions to be considered in sorted order are:
1/5, 1/3, 2/5, 1/2, 3/5, 2/3.
The third fraction is 2/5.

Input: A = [1, 7], K = 1
Output: [1, 7]

Note:

A will have length between 2 and 2000.
Each A[i] will be between 1 and 30000.
K will be between 1 and A.length * (A.length - 1) / 2.

Tags: 
    1. Binary Search
    2. Heap

Similar Questions:
    1. Kth Smallest Element in a Sorted Matrix
    2. Kth Smallest Number in Multiplication Table
    3. Find K-th Smallest Pair Distance

*/

class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& A, int K) {
        
    }
};

TEST_CASE("k-th-smallest-prime-fraction", "[786][Hard][binary-search][heap]") {
    //TODO
    CHECK(true);
}

