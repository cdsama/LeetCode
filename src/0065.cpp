#include "LeetCode.hpp"

/*
65. Valid Number
Hard

Validate if a given string can be interpreted as a decimal number.

Some examples:
"0" ,true
" 0.1 " ,true
"abc" ,false
"1 a" ,false
"2e10" ,true
" -90e3   " ,true
" 1e" ,false
"e3" ,false
" 6e-1" ,true
" 99e2.5 " ,false
"53.5e93" ,true
" --6 " ,false
"-+3" ,false
"95a54e53" ,false

Note: It is intended for the problem statement to be ambiguous. You should
gather all requirements up front before implementing one. However, here is a
list of characters that can be in a valid decimal number:

Numbers 0-9
Exponent - "e"
Positive/negative sign - "+"/"-"
Decimal point - "."
Of course, the context of these characters also matters in the input.

Update (2015-02-10):
The signature of the C++ function had been updated. If you still see your
function signature accepts a const char * argument, please click the reload
button to reset your code definition.
*/

class Solution {
   public:
    bool isNumber(string s) {
        static const vector<vector<int>> status = {
            /*     1   E   +   .  ' ' else stop */
            /*     0   1   2   3   4   5   6    + or 0 for align */
            /**/ {+1, -1, +4, 10, 00, -1, -1},  // 0  // space
            /**/ {+1, +2, -1, +6, +9, -1, 00},  // 1  // (+/-)number
            /**/ {+3, -1, +7, -1, -1, -1, -1},  // 2  // number E
            /**/ {+3, -1, -1, -1, +9, -1, 00},  // 3  // number E number
            /**/ {+1, -1, -1, +5, -1, -1, -1},  // 4  // +/-
            /**/ {+6, +2, -1, -1, -1, -1, -1},  // 5  // number .
            /**/ {+6, +2, -1, -1, +9, -1, 00},  // 6  // number . number
            /**/ {+8, -1, -1, -1, -1, -1, -1},  // 7  // number E +/-
            /**/ {+8, -1, -1, -1, +9, -1, 00},  // 8  // number E +/- number
            /**/ {-1, -1, -1, -1, +9, -1, 00},  // 9  // end space
            /**/ {+6, -1, -1, -1, -1, -1, -1},  // 10 // .
        };
        static auto next = [](const int current, const char c) -> int {
            switch (c) {
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                    return status[current][0];
                case 'e':
                case 'E':
                    return status[current][1];
                case '+':
                case '-':
                    return status[current][2];
                case '.':
                    return status[current][3];
                case ' ':
                    return status[current][4];
                default:
                    return status[current][5];
            }
        };
        int current = 0;
        for (const char c : s) {
            current = next(current, c);
            if (current == -1) {
                return false;
            }
        }
        return status[current][6] == 0;
    }
};
TEST_CASE(TEST_NAME, TEST_TAGS) {
    vector<pair<string, bool>> tests = {
        {"0", true},         {" 0.1 ", true},     {"abc", false},
        {"1 a", false},      {"2e10", true},      {" -90e3   ", true},
        {" 1e", false},      {"e3", false},       {" 6e-1", true},
        {" 99e2.5 ", false}, {"53.5e93", true},   {" --6 ", false},
        {"-+3", false},      {"95a54e53", false}, {".1", true},
        {".", false},        {"+.8", true}};
    Solution s;
    for (const auto& p : tests) {
        INFO(p.first << " " << boolalpha << p.second);
        CHECK(s.isNumber(p.first) == p.second);
    }
}
