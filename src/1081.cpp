#include "LeetCode.hpp"

/*
1081. Smallest Subsequence of Distinct Characters
Medium

Return the lexicographically smallest subsequence of text that contains all the distinct characters of text exactly once.
 
Example 1:

Input: "cdadabcc"
Output: "adbc"

Example 2:

Input: "abcd"
Output: "abcd"

Example 3:

Input: "ecbacba"
Output: "eacb"

Example 4:

Input: "leetcode"
Output: "letcod"

 
Note:

1 <= text.length <= 1000
text consists of lowercase English letters.

 

Tags: 
    1. String

Hint 1:
Greedily try to add one missing character. How to check if adding some character will not cause problems ? Use bit-masks to check whether you will be able to complete the sub-sequence if you add the character at some index i.

*/

class Solution {
public:
    string smallestSubsequence(string text) {
        
    }
};

TEST_CASE("smallest-subsequence-of-distinct-characters", "[1081][Medium][string]") {
    //TODO
    CHECK(true);
}

