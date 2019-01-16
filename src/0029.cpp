
#include "LeetCode.hpp"

/*
29. Divide Two Integers
Medium

Given two integers dividend and divisor, divide two integers without using
multiplication, division and mod operator.

Return the quotient after dividing dividend by divisor.

The integer division should truncate toward zero.

Example 1:
    Input: dividend = 10, divisor = 3
    Output: 3

Example 2:
    Input: dividend = 7, divisor = -3
    Output: -2

Note:

Both dividend and divisor will be 32-bit signed integers.
The divisor will never be 0.
Assume we are dealing with an environment which could only store integers within
the 32-bit signed integer range: [−2^31,  2^31 − 1]. For the purpose of this
problem, assume that your function returns 2^31 − 1 when the division result
overflows.
*/

class Solution {
   public:
    int divide(int dividend, int divisor) {
        if ((dividend == (-2147483647 - 1)) && divisor == -1) {
            return 2147483647;
        }
        bool n = (divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0);
        unsigned int divid = dividend < 0 ? -dividend : dividend;
        unsigned int divis = divisor < 0 ? -divisor : divisor;
        unsigned int ret = 0, k, c;
        while (divid >= divis) {
            for (k = 0, c = divis; divid >= c; c <<= 1, k++) {
                if (divid - c < divis) {
                    ret += 1 << k;
                    return n ? -static_cast<int>(ret) : ret;
                }
            }
            ret += (1 << (k - 1));
            divid -= (c >> 1);
        }
        return n ? -static_cast<int>(ret) : ret;
    }
};

TEST_CASE(TEST_NAME, TEST_TAGS) {
    Solution s;
    CHECK(s.divide(10, 3) == 3);
    CHECK(s.divide(7, -3) == -2);
}