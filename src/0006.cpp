#include "LeetCode.hpp"

/*
6. ZigZag Conversion
Medium

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of
rows like this: (you may want to display this pattern in a fixed font for better
legibility)

P   A   H   N
A P L S I I G
Y   I   R

And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number
of rows:

string convert(string s, int numRows);

Example 1:
    Input: s = "PAYPALISHIRING", numRows = 3
    Output: "PAHNAPLSIIGYIR"

Example 2:
    Input: s = "PAYPALISHIRING", numRows = 4
    Output: "PINALSIGYAHRPI"

Explanation:

P     I    N
A   L S  I G
Y A   H R
P     I

Tags:
    1. String

*/

class Solution {
   public:
    string convert(string s, int numRows) {
        if (numRows < 2) {
            return s;
        }
        size_t size = s.size();
        size_t half_cycle = numRows - 1;
        size_t cycle = half_cycle * 2;
        size_t full_cycles = size / cycle;
        size_t last_cycle = size % cycle;
        string ret;
        ret.reserve(size);
        size_t first_size = full_cycles + int(last_cycle > 0);
        for (size_t i = 0; i < first_size; i++) {
            ret.push_back(s[cycle * i]);
        }
        for (size_t line = 1; line < half_cycle; ++line) {
            size_t line_size = full_cycles * 2 + int(last_cycle > line) +
                               int(last_cycle > (cycle - line));
            for (size_t i = 0; i < line_size; i++) {
                if (i % 2 == 0) {
                    ret.push_back(s[cycle * (i / 2) + line]);
                } else {
                    ret.push_back(s[cycle * (i / 2) + cycle - line]);
                }
            }
        }
        size_t last_size = full_cycles + int(last_cycle > half_cycle);
        for (size_t i = 0; i < last_size; i++) {
            ret.push_back(s[cycle * i + half_cycle]);
        }
        return ret;
    }
};

TEST_CASE("zigzag-conversion", "[6][Medium][string]") {
    Solution s;
    CHECK(s.convert("PAYPALISHIRING", 3) == "PAHNAPLSIIGYIR");
    CHECK(s.convert("PAYPALISHIRING", 4) == "PINALSIGYAHRPI");
}
