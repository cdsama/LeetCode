#include "LeetCode.hpp"

class Solution
{
  public:
    int romanToInt(string s)
    {
        int num = 0;
        for (auto itr = s.rbegin(); itr != s.rend(); ++itr)
        {
            switch (*itr)
            {
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

TEST_CASE("Roman to Integer", "roman-to-integer")
{
    Solution s;
    CHECK(s.romanToInt("III") == 3);
    CHECK(s.romanToInt("IV") == 4);
    CHECK(s.romanToInt("LVIII") == 58);
    CHECK(s.romanToInt("MCMXCIV") == 1994);
    CHECK(s.romanToInt("MCMLXXX") == 1980);
}