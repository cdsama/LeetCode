#include "LeetCode.hpp"

/*
738. Monotone Increasing Digits
Medium

Given a non-negative integer N, find the largest number that is less than or equal to N with monotone increasing digits.

(Recall that an integer has monotone increasing digits if and only if each pair of adjacent digits x and y satisfy x <= y.)

Example 1:

Input: N = 10
Output: 9

Example 2:

Input: N = 1234
Output: 1234

Example 3:

Input: N = 332
Output: 299

Note:
N is an integer in the range [0, 10^9].

Tags: 
    1. Greedy

Similar Questions:
    1. Remove K Digits

Hint 1:
Build the answer digit by digit, adding the largest possible one that would make the number still less than or equal to N.

*/

class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        
    }
};

TEST_CASE("monotone-increasing-digits", "[738][Medium][greedy]") {
    //TODO
    CHECK(true);
}

