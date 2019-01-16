#include "LeetCode.hpp"

/*
9. Palindrome Number
Easy

Determine whether an integer is a palindrome. An integer is a palindrome when it
reads the same backward as forward.

Example 1:
    Input: 121
    Output: true

Example 2:
    Input: -121
    Output: false
    Explanation: From left to right, it reads -121. From right to left, it
becomes 121-. Therefore it is not a palindrome.

Example 3:
    Input: 10
    Output: false
    Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

Follow up:
Coud you solve it without converting the integer to a string?
*/

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

TEST_CASE(TEST_NAME, TEST_TAGS) {
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