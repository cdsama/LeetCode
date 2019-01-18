#include "LeetCode.hpp"

/*
307. Range Sum Query - Mutable
Medium

Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.
The update(i, val) function modifies nums by updating the element at index i to val.
Example:

Given nums = [1, 3, 5]

sumRange(0, 2) -> 9
update(1, 2)
sumRange(0, 2) -> 8

Note:

The array is only modifiable by the update function.
You may assume the number of calls to update and sumRange function is distributed evenly.

Tags: 
    1. Binary Indexed Tree
    2. Segment Tree

Similar Questions:
    1. Range Sum Query - Immutable
    2. Range Sum Query 2D - Mutable

*/

class NumArray {
public:
    NumArray(vector<int> nums) {
        
    }
    
    void update(int i, int val) {
        
    }
    
    int sumRange(int i, int j) {
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * obj.update(i,val);
 * int param_2 = obj.sumRange(i,j);
 */

TEST_CASE("range-sum-query-mutable", "[307][Medium][binary-indexed-tree][segment-tree]") {
    //TODO
    CHECK(true);
}

