#include "LeetCode.hpp"

/*
8. String to Integer (atoi)
Medium

Implement atoi which converts a string to an integer.
The function first discards as many whitespace characters as necessary until the
first non-whitespace character is found. Then, starting from this character,
takes an optional initial plus or minus sign followed by as many numerical
digits as possible, and interprets them as a numerical value. The string can
contain additional characters after those that form the integral number, which
are ignored and have no effect on the behavior of this function. If the first
sequence of non-whitespace characters in str is not a valid integral number, or
if no such sequence exists because either str is empty or it contains only
whitespace characters, no conversion is performed. If no valid conversion could
be performed, a zero value is returned. Note:

Only the space character ' ' is considered as whitespace character.
Assume we are dealing with an environment which could only store integers within
the 32-bit signed integer range: [−2^31,  2^31 − 1]. If the numerical value is
out of the range of representable values, INT_MAX (2^31 − 1) or INT_MIN (−2^31)
is returned.

Example 1:
    Input: "42"
    Output: 42

Example 2:
    Input: "   -42"
    Output: -42
    Explanation: The first non-whitespace character is '-', which is the minus
sign. Then take as many numerical digits as possible, which gets 42.

Example 3:
    Input: "4193 with words"
    Output: 4193
    Explanation: Conversion stops at digit '3' as the next character is not a
numerical digit.

Example 4:
    Input: "words and 987"
    Output: 0
    Explanation: The first non-whitespace character is 'w', which is not a
numerical digit or a +/- sign. Therefore no valid conversion could be performed.

Example 5:
    Input: "-91283472332"
    Output: -2147483648
    Explanation: The number "-91283472332" is out of the range of a 32-bit
signed integer. Thefore INT_MIN (−2^31) is returned.

Tags:
    1. Math
    2. String

Similar Questions:
    1. Reverse Integer
    2. Valid Number

*/

class Solution {
   public:
    int myAtoi(string str) {
        int64_t ret = 0;
        if (str.empty()) {
            return 0;
        }
        bool allow_sign = true;
        bool allow_space = true;
        int sign = 1;
        for (const auto ch : str) {
            if (ch >= '0' && ch <= '9') {
                allow_space = false;
                allow_sign = false;
                int num = ch - '0';
                ret = ret * 10 + num;
                if (sign > 0) {
                    if (ret > numeric_limits<int>::max()) {
                        return numeric_limits<int>::max();
                    }
                } else {
                    if ((-ret) < numeric_limits<int>::min()) {
                        return numeric_limits<int>::min();
                    }
                }
            } else if (ch == ' ') {
                if (!allow_space) {
                    return static_cast<int>(ret * sign);
                }
            } else if (ch == '+') {
                allow_space = false;
                if (allow_sign) {
                    allow_sign = false;
                } else {
                    return static_cast<int>(ret * sign);
                }
                sign = 1;
            } else if (ch == '-') {
                allow_space = false;
                if (allow_sign) {
                    allow_sign = false;
                } else {
                    return static_cast<int>(ret * sign);
                }
                sign = -1;
            } else {
                return static_cast<int>(ret * sign);
            }
        }
        return static_cast<int>(ret * sign);
    }
};

TEST_CASE("string-to-integer-atoi", "[8][Medium][math][string]") {
    Solution s;

    CHECK(s.myAtoi("42") == 42);
    CHECK(s.myAtoi("   -42") == -42);
    CHECK(s.myAtoi("4193 with words") == 4193);
    CHECK(s.myAtoi("words and 987") == 0);
    CHECK(s.myAtoi("-91283472332") == INT_MIN);
}
