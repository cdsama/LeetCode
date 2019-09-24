#include "LeetCode.hpp"

/*
1044. Longest Duplicate Substring
Hard

Given a string S, consider all duplicated substrings: (contiguous) substrings of S that occur 2 or more times.  (The occurrences may overlap.)
Return any duplicated substring that has the longest possible length.  (If S does not have a duplicated substring, the answer is "".)
 
Example 1:

Input: "banana"
Output: "ana"

Example 2:

Input: "abcd"
Output: ""

 
Note:

2 <= S.length <= 10^5
S consists of lowercase English letters.

Tags: 
    1. Hash Table
    2. Binary Search

Hint 1:
Binary search for the length of the answer.  (If there's an answer of length 10, then there are answers of length 9, 8, 7, ...)

Hint 2:
To check whether an answer of length K exists, we can use Rabin-Karp 's algorithm.

*/

class Solution {
public:
    string longestDupSubstring(string S) {
        
    }
};

TEST_CASE("longest-duplicate-substring", "[1044][Hard][hash-table][binary-search]") {
    //TODO
    CHECK(true);
}

