#include "LeetCode.hpp"

/*
258. Add Digits
Easy

Given a non-negative integer num, repeatedly add all its digits until the result
has only one digit.

Example:
    Input: 38
    Output: 2
    Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2.
                Since 2 has only one digit, return it.

Follow up:
Could you do it without any loop/recursion in O(1) runtime?

Tags:
    1. Math

Similar Questions:
    1. Happy Number

Hint 1:
A naive implementation of the above process is trivial. Could you come up with
other methods?

Hint 2:
What are all the possible results?

Hint 3:
How do they occur, periodically or randomly?

Hint 4:
You may find this Wikipedia article useful.

*/

class Solution {
   public:
    int addDigits(int num) { return 1 + ((num - 1) % 9); }
};

TEST_CASE("add-digits", "[258][Easy][math]") {
    Solution s;
    CHECK(s.addDigits(0) == 0);
    CHECK(s.addDigits(38) == 2);
}
