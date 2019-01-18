#include "LeetCode.hpp"

/*
7. Reverse Integer
Easy

Given a 32-bit signed integer, reverse digits of an integer.

Example 1:
    Input: 123
    Output: 321

Example 2:
    Input: -123
    Output: -321

Example 3:
    Input: 120
    Output: 21

Note:
Assume we are dealing with an environment which could only store integers within
the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this
problem, assume that your function returns 0 when the reversed integer
overflows.

Tags:
    1. Math

Similar Questions:
    1. String to Integer (atoi)
    2. Reverse Bits

*/

class Solution {
   public:
    int reverse(int x) {
        long long result = 0;
        while (x) {
            result = 10 * result + x % 10;
            x = x / 10;
        }
        return static_cast<int>(
            (result > INT_MAX || result < INT_MIN) ? 0 : result);
    }
};

TEST_CASE("reverse-integer", "[7][Easy][math]") {
    Solution s;
    CHECK(s.reverse(123) == 321);
    CHECK(s.reverse(-123) == -321);
    CHECK(s.reverse(1234567) == 7654321);
    CHECK(s.reverse(INT_MAX) == 0);
    CHECK(s.reverse(INT_MIN) == 0);
}
