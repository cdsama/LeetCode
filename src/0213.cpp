#include "LeetCode.hpp"

/*
213. House Robber II
Medium

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.
Example 1:

Input: [2,3,2]
Output: 3
Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2),
             because they are adjacent houses.

Example 2:

Input: [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
             Total amount you can rob = 1 + 3 = 4.

Tags: 
    1. Dynamic Programming

Similar Questions:
    1. House Robber
    2. Paint House
    3. Paint Fence
    4. House Robber III
    5. Non-negative Integers without Consecutive Ones
    6. Coin Path

Hint 1:
Since House[1] and House[n] are adjacent, they cannot be robbed together. Therefore, the problem becomes to rob either House[1]-House[n-1] or House[2]-House[n], depending on which choice offers more money. Now the problem has degenerated to the House Robber, which is already been solved.

*/

class Solution {
public:
    int rob(vector<int>& nums) {
        
    }
};

TEST_CASE("house-robber-ii", "[213][Medium][dynamic-programming]") {
    //TODO
    CHECK(true);
}

