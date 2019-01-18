#include "LeetCode.hpp"

/*
719. Find K-th Smallest Pair Distance
Hard

Given an integer array, return the k-th smallest distance among all the pairs. The distance of a pair (A, B) is defined as the absolute difference between A and B. 
Example 1:

Input:
nums = [1,3,1]
k = 1
Output: 0 
Explanation:
Here are all the pairs:
(1,3) -> 2
(1,1) -> 0
(3,1) -> 2
Then the 1st smallest distance pair is (1,1), and its distance is 0.

Note:

2 <= len(nums) <= 10000.
0 <= nums[i] < 1000000.
1 <= k <= len(nums) * (len(nums) - 1) / 2.

Tags: 
    1. Array
    2. Binary Search
    3. Heap

Similar Questions:
    1. Find K Pairs with Smallest Sums
    2. Kth Smallest Element in a Sorted Matrix
    3. Find K Closest Elements
    4. Kth Smallest Number in Multiplication Table
    5. K-th Smallest Prime Fraction

Hint 1:
Binary search for the answer.  How can you check how many pairs have distance <= X?

*/

class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        
    }
};

TEST_CASE("find-k-th-smallest-pair-distance", "[719][Hard][array][binary-search][heap]") {
    //TODO
    CHECK(true);
}

