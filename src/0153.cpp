#include "LeetCode.hpp"

/*
153. Find Minimum in Rotated Sorted Array
Medium

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
(i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).
Find the minimum element.
You may assume no duplicate exists in the array.
Example 1:

Input: [3,4,5,1,2] 
Output: 1

Example 2:

Input: [4,5,6,7,0,1,2]
Output: 0

Tags: 
    1. Array
    2. Binary Search

Similar Questions:
    1. Search in Rotated Sorted Array
    2. Find Minimum in Rotated Sorted Array II

Hint 1:
Array was originally in ascending order. Now that the array is rotated, there would be a point in the array where there is a small deflection from the increasing sequence. eg. The array would be something like [4, 5, 6, 7, 0, 1, 2].

Hint 2:
You can divide the search space into two and see which direction to go.
Can you think of an algorithm which has O(logN) search complexity?

Hint 3:

All the elements to the left of inflection point > first element of the array.
All the elements to the right of inflection point < first element of the array.

*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        
    }
};

TEST_CASE("find-minimum-in-rotated-sorted-array", "[153][Medium][array][binary-search]") {
    //TODO
    CHECK(true);
}

