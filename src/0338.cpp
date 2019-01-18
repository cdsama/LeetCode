#include "LeetCode.hpp"

/*
338. Counting Bits
Medium

Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.
Example 1:

Input: 2
Output: [0,1,1]
Example 2:

Input: 5
Output: [0,1,1,2,1,2]

Follow up:

It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
Space complexity should be O(n).
Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.

Tags: 
    1. Dynamic Programming
    2. Bit Manipulation

Similar Questions:
    1. Number of 1 Bits

Hint 1:
You should make use of what you have produced already.

Hint 2:
Divide the numbers in ranges like [2-3], [4-7], [8-15] and so on. And try to generate new range from previous.

Hint 3:
Or does the odd/even status of the number help you in calculating the number of 1s?

*/

class Solution {
public:
    vector<int> countBits(int num) {
        
    }
};

TEST_CASE("counting-bits", "[338][Medium][dynamic-programming][bit-manipulation]") {
    //TODO
    CHECK(true);
}

