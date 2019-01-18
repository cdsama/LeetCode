#include "LeetCode.hpp"

/*
357. Count Numbers with Unique Digits
Medium

Given a non-negative integer n, count all numbers with unique digits, x, where 0 ≤ x < 10n.

Example:

Input: 2
Output: 91 
Explanation: The answer should be the total numbers in the range of 0 ≤ x < 100, 
             excluding 11,22,33,44,55,66,77,88,99

Tags: 
    1. Math
    2. Dynamic Programming
    3. Backtracking

Hint 1:
A direct way is to use the backtracking approach.

Hint 2:
Backtracking should contains three states which are (the current number, number of steps to get that number and a bitmask which represent which number is marked as visited so far in the current number). Start with state (0,0,0) and count all valid number till we reach number of steps equals to 10n.

Hint 3:
This problem can also be solved using a dynamic programming approach and some knowledge of combinatorics.

Hint 4:
Let f(k) = count of numbers with unique digits with length equals k.

Hint 5:
f(1) = 10, ..., f(k) = 9 * 9 * 8 * ... (9 - k + 2) [The first factor is 9 because a number cannot start with 0].

*/

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        
    }
};

TEST_CASE("count-numbers-with-unique-digits", "[357][Medium][math][dynamic-programming][backtracking]") {
    //TODO
    CHECK(true);
}

