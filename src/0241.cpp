#include "LeetCode.hpp"

/*
241. Different Ways to Add Parentheses
Medium

Given a string of numbers and operators, return all possible results from computing all the different possible ways to group numbers and operators. The valid operators are +, - and *.
Example 1:

Input: "2-1-1"
Output: [0, 2]
Explanation: 
((2-1)-1) = 0 
(2-(1-1)) = 2
Example 2:

Input: "2*3-4*5"
Output: [-34, -14, -10, -10, 10]
Explanation: 
(2*(3-(4*5))) = -34 
((2*3)-(4*5)) = -14 
((2*(3-4))*5) = -10 
(2*((3-4)*5)) = -10 
(((2*3)-4)*5) = 10

Tags: 
    1. Divide and Conquer

Similar Questions:
    1. Unique Binary Search Trees II
    2. Basic Calculator
    3. Expression Add Operators

*/

class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        
    }
};

TEST_CASE("different-ways-to-add-parentheses", "[241][Medium][divide-and-conquer]") {
    //TODO
    CHECK(true);
}

