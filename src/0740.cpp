#include "LeetCode.hpp"

/*
740. Delete and Earn
Medium

Given an array nums of integers, you can perform operations on the array.

In each operation, you pick any nums[i] and delete it to earn nums[i] points.  After, you must delete every element equal to nums[i] - 1 or nums[i] + 1.

You start with 0 points.  Return the maximum number of points you can earn by applying such operations.

Example 1:

Input: nums = [3, 4, 2]
Output: 6
Explanation: 
Delete 4 to earn 4 points, consequently 3 is also deleted.
Then, delete 2 to earn 2 points. 6 total points are earned.

Example 2:

Input: nums = [2, 2, 3, 3, 3, 4]
Output: 9
Explanation: 
Delete 3 to earn 3 points, deleting both 2's and the 4.
Then, delete 3 again to earn 3 points, and 3 again to earn 3 points.
9 total points are earned.

Note:
The length of nums is at most 20000.
Each element nums[i] is an integer in the range [1, 10000].

Tags: 
    1. Dynamic Programming

Similar Questions:
    1. House Robber

Hint 1:
If you take a number, you might as well take them all.  Keep track of what the value is of the subset of the input with maximum M when you either take or don't take M.

*/

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
    }
};

TEST_CASE("delete-and-earn", "[740][Medium][dynamic-programming]") {
    //TODO
    CHECK(true);
}

