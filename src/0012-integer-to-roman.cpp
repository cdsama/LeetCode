#include "LeetCode.hpp"

class Solution {
   public:
    string intToRoman(int num) {
        static const vector<pair<int, string>> table = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
            {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
            {5, "V"},    {4, "IV"},   {1, "I"}};
        string s;
        for (const auto &p : table) {
            while (num >= p.first) {
                s += p.second;
                num -= p.first;
            }
        }
        return s;
    }
};

TEST_CASE("Integer to Roman", "integer-to-roman") {
    Solution s;
    CHECK(s.intToRoman(3) == "III");
    CHECK(s.intToRoman(4) == "IV");
    CHECK(s.intToRoman(58) == "LVIII");
    CHECK(s.intToRoman(1994) == "MCMXCIV");
    CHECK(s.intToRoman(1980) == "MCMLXXX");
}