#include "LeetCode.hpp"

/*
13. Roman to Integer
Easy

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and
M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, two is written as II in Roman numeral, just two one's added
together. Twelve is written as, XII, which is simply X + II. The number twenty
seven is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right.
However, the numeral for four is not IIII. Instead, the number four is written
as IV. Because the one is before the five we subtract it making four. The same
principle applies to the number nine, which is written as IX. There are six
instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer. Input is guaranteed to be
within the range from 1 to 3999.

Example 1:
    Input: "III"
    Output: 3

Example 2:
    Input: "IV"
    Output: 4

Example 3:
    Input: "IX"
    Output: 9

Example 4:
    Input: "LVIII"
    Output: 58
    Explanation: L = 50, V= 5, III = 3.

Example 5:
    Input: "MCMXCIV"
    Output: 1994
    Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

Tags:
    1. Math
    2. String

Similar Questions:
    1. Integer to Roman

Hint 1:
I - 1
V - 5
X - 10
L - 50
C - 100
D - 500
M - 1000

Hint 2:
Rules:
* If I comes before V or X, subtract 1 eg: IV = 4 and IX = 9
* If X comes before L or C, subtract 10 eg: XL = 40 and XC = 90
* If C comes before D or M, subtract 100 eg: CD = 400 and CM = 900

*/

class Solution {
   public:
    int romanToInt(string s) {
        int num = 0;
        for (auto itr = s.rbegin(); itr != s.rend(); ++itr) {
            switch (*itr) {
                case 'I':
                    num += (num >= 5 ? -1 : 1);
                    break;
                case 'V':
                    num += 5;
                    break;
                case 'X':
                    num += (num >= 50 ? -10 : 10);
                    break;
                case 'L':
                    num += 50;
                    break;
                case 'C':
                    num += (num >= 500 ? -100 : 100);
                    break;
                case 'D':
                    num += 500;
                    break;
                case 'M':
                    num += 1000;
                    break;

                default:
                    break;
            }
        }
        return num;
    }
};

TEST_CASE("roman-to-integer", "[13][Easy][math][string]") {
    Solution s;
    CHECK(s.romanToInt("III") == 3);
    CHECK(s.romanToInt("IV") == 4);
    CHECK(s.romanToInt("LVIII") == 58);
    CHECK(s.romanToInt("MCMXCIV") == 1994);
    CHECK(s.romanToInt("MCMLXXX") == 1980);
}
