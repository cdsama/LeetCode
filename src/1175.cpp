#include "LeetCode.hpp"

/*
1175. Prime Arrangements
Easy

Return the number of permutations of 1 to n so that prime numbers are at prime indices (1-indexed.)
(Recall that an integer is prime if and only if it is greater than 1, and cannot be written as a product of two positive integers both smaller than it.)
Since the answer may be large, return the answer modulo 10^9 + 7.
 
Example 1:

Input: n = 5
Output: 12
Explanation: For example [1,2,5,4,3] is a valid permutation, but [5,2,3,4,1] is not because the prime number 5 is at index 1.

Example 2:

Input: n = 100
Output: 682289015

 
Constraints:

1 <= n <= 100

Tags: 
    1. Math

Hint 1:
Solve the problem for prime numbers and composite numbers separately.

Hint 2:
Multiply the number of permutations of prime numbers over prime indices with the number of permutations of composite numbers over composite indices.

Hint 3:
The number of permutations equals the factorial.

*/

class Solution {
public:
    int numPrimeArrangements(int n) {
        
    }
};

TEST_CASE("prime-arrangements", "[1175][Easy][math]") {
    //TODO
    CHECK(true);
}

