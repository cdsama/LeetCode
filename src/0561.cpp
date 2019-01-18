#include "LeetCode.hpp"

/*
561. Array Partition I
Easy

Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.

Example 1:

Input: [1,4,3,2]

Output: 4
Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3, 4).

Note:

n is a positive integer, which is in the range of [1, 10000].
All the integers in the array will be in the range of [-10000, 10000].

Tags: 
    1. Array

Hint 1:
Obviously, brute force won't help here. Think of something else, take some example like 1,2,3,4.

Hint 2:
How will you make pairs to get the result? There must be some pattern.

Hint 3:
Did you observe that- Minimum element gets add into the result in sacrifice of maximum element.

Hint 4:
Still won't able to find pairs? Sort the array and try to find the pattern.

*/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
    }
};

TEST_CASE("array-partition-i", "[561][Easy][array]") {
    //TODO
    CHECK(true);
}

