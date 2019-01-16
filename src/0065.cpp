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
        static const vector<vector<int>> table = {
            /*     1   E   +   .  ' '  a   else */
            /*     0   1   2   3   4   5   6    */
            /**/ {+1, -1, +0, -1, 00, -1, -1},  // 0 init
            /**/ {+1, +0, -1, 00, 00, 00, -1},  // 1 num
        };
        return false;
    }
};
TEST_CASE(TEST_NAME, TEST_TAGS) {
    vector<pair<string, bool>> tests = {
        {"0", true},         {" 0.1 ", true},    {"abc", false},
        {"1 a", false},      {"2e10", true},     {" -90e3   ", true},
        {" 1e", false},      {"e3", false},      {" 6e-1", true},
        {" 99e2.5 ", false}, {"53.5e93", true},  {" --6 ", false},
        {"-+3", false},      {"95a54e53", false}};
    Solution s;
    for (const auto& p : tests) {
        CHECK(s.isNumber(p.first) == p.second);
    }
}
