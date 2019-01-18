#include "LeetCode.hpp"

/*
650. 2 Keys Keyboard
Medium

Initially on a notepad only one character 'A' is present. You can perform two operations on this notepad for each step: 

Copy All: You can copy all the characters present on the notepad (partial copy is not allowed).
Paste: You can paste the characters which are copied last time.

Given a number n. You have to get exactly n 'A' on the notepad by performing the minimum number of steps permitted. Output the minimum number of steps to get n 'A'. 

Example 1:

Input: 3
Output: 3
Explanation:
Intitally, we have one character 'A'.
In step 1, we use Copy All operation.
In step 2, we use Paste operation to get 'AA'.
In step 3, we use Paste operation to get 'AAA'.

Note:

The n will be in the range [1, 1000].

Tags: 
    1. Dynamic Programming

Similar Questions:
    1. 4 Keys Keyboard

Hint 1:
How many characters may be there in the clipboard at the last step if n = 3? n = 7? n = 10? n = 24?

*/

class Solution {
public:
    int minSteps(int n) {
        
    }
};

TEST_CASE("2-keys-keyboard", "[650][Medium][dynamic-programming]") {
    //TODO
    CHECK(true);
}

