#include "LeetCode.hpp"

class Solution {
   public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else if (x < 10) {
            return true;
        }

        int o = x;
        long long result = 0;
        while (x) {
            result = 10 * result + x % 10;
            x = x / 10;
        }
        return result > INT_MAX ? false : result == o;
    }
};

TEST_CASE("Palindrome Number", "palindrome-number") {
    Solution s;
    CHECK(s.isPalindrome(123) == false);
    CHECK(s.isPalindrome(-123) == false);
    CHECK(s.isPalindrome(1234567) == false);
    CHECK(s.isPalindrome(INT_MAX) == false);
    CHECK(s.isPalindrome(INT_MIN) == false);
    CHECK(s.isPalindrome(12321) == true);
    CHECK(s.isPalindrome(10001) == true);
    CHECK(s.isPalindrome(22) == true);
    CHECK(s.isPalindrome(0) == true);
    CHECK(s.isPalindrome(1) == true);
    CHECK(s.isPalindrome(1991) == true);
}