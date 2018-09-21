#include "LeetCode.hpp"

class Solution
{
  public:
    int reverse(int x)
    {
        long long result = 0;
        while (x)
        {
            result = 10 * result + x % 10;
            x = x / 10;
        }
        return (result > INT_MAX || result < INT_MIN) ? 0 : result;
    }
};

TEST_CASE()
{
    Solution s;
    CHECK(s.reverse(123) == 321);
    CHECK(s.reverse(-123) == -321);
    CHECK(s.reverse(1234567) == 7654321);
    CHECK(s.reverse(INT_MAX) == 0);
    CHECK(s.reverse(INT_MIN) == 0);
}