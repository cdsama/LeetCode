#include "LeetCode.hpp"

/*
374. Guess Number Higher or Lower
Easy

We are playing the Guess Game. The game is as follows:
I pick a number from 1 to n. You have to guess which number I picked.
Every time you guess wrong, I'll tell you whether the number is higher or lower.
You call a pre-defined API guess(int num) which returns 3 possible results (-1, 1, or 0):

-1 : My number is lower
 1 : My number is higher
 0 : Congrats! You got it!

Example :

Input: n = 10, pick = 6
Output: 6

Tags: 
    1. Binary Search

Similar Questions:
    1. First Bad Version
    2. Guess Number Higher or Lower II
    3. Find K Closest Elements

*/

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        
    }
};

TEST_CASE("guess-number-higher-or-lower", "[374][Easy][binary-search]") {
    //TODO
    CHECK(true);
}

