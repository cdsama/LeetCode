#include "LeetCode.hpp"

/*
1017. Convert to Base -2
Medium

Given a number N, return a string consisting of "0"s and "1"s that represents its value in base -2 (negative two).
The returned string must have no leading zeroes, unless the string is "0".
 

Example 1:

Input: 2
Output: "110"
Explantion: (-2) ^ 2 + (-2) ^ 1 = 2

Example 2:

Input: 3
Output: "111"
Explantion: (-2) ^ 2 + (-2) ^ 1 + (-2) ^ 0 = 3

Example 3:

Input: 4
Output: "100"
Explantion: (-2) ^ 2 = 4

 
Note:

0 <= N <= 10^9

Tags: 
    1. Math

Hint 1:
Figure out whether you need the ones digit placed or not, then shift by two.

*/

class Solution {
public:
    string baseNeg2(int N) {
        
    }
};

TEST_CASE("convert-to-base-2", "[1017][Medium][math]") {
    //TODO
    CHECK(true);
}

