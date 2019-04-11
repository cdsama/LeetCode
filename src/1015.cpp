#include "LeetCode.hpp"

/*
1015. Smallest Integer Divisible by K
Medium

Given a positive integer K, you need find the smallest positive integer N such that N is divisible by K, and N only contains the digit 1.
Return the length of N.  If there is no such N, return -1.
 
Example 1:

Input: 1
Output: 1
Explanation: The smallest answer is N = 1, which has length 1.
Example 2:

Input: 2
Output: -1
Explanation: There is no such positive integer N divisible by 2.
Example 3:

Input: 3
Output: 3
Explanation: The smallest answer is N = 111, which has length 3.
 
Note:

1 <= K <= 10^5

Tags: 
    1. Math

Hint 1:
11111 = 1111 * 10 + 1
We only need to store remainders modulo K.

Hint 2:
If we never get a remainder of 0, why would that happen, and how would we know that?

*/

class Solution {
public:
    int smallestRepunitDivByK(int K) {
        
    }
};

TEST_CASE("smallest-integer-divisible-by-k", "[1015][Medium][math]") {
    //TODO
    CHECK(true);
}

