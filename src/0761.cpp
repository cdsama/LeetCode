#include "LeetCode.hpp"

/*
761. Special Binary String
Hard

Special binary strings are binary strings with the following two properties:

The number of 0's is equal to the number of 1's.
Every prefix of the binary string has at least as many 1's as 0's.

Given a special string S, a move consists of choosing two consecutive, non-empty, special substrings of S, and swapping them.  (Two strings are consecutive if the last character of the first string is exactly one index before the first character of the second string.)

At the end of any number of moves, what is the lexicographically largest resulting string possible?

Example 1:

Input: S = "11011000"
Output: "11100100"
Explanation:
The strings "10" [occuring at S[1]] and "1100" [at S[3]] are swapped.
This is the lexicographically largest string possible after some number of swaps.

Note:
S has length at most 50.
S is guaranteed to be a special binary string as defined above.

Tags: 
    1. String
    2. Recursion

Similar Questions:
    1. Valid Parenthesis String

Hint 1:
Draw a line from (x, y) to (x+1, y+1) if we see a "1", else to (x+1, y-1).
A special substring is just a line that starts and ends at the same y-coordinate, and that is the lowest y-coordinate reached.
Call a mountain a special substring with no special prefixes - ie. only at the beginning and end is the lowest y-coordinate reached.
If F is the answer function, and S has mountain decomposition M1,M2,M3,...,Mk,  then the answer is:
reverse_sorted(F(M1), F(M2), ..., F(Mk)).
However, you'll also need to deal with the case that S is a mountain, such as 11011000 -> 11100100.

*/

class Solution {
public:
    string makeLargestSpecial(string S) {
        
    }
};

TEST_CASE("special-binary-string", "[761][Hard][string][recursion]") {
    //TODO
    CHECK(true);
}

