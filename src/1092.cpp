#include "LeetCode.hpp"

/*
1092. Shortest Common Supersequence 
Hard

Given two strings str1 and str2, return the shortest string that has both str1 and str2 as subsequences.  If multiple answers exist, you may return any of them.
(A string S is a subsequence of string T if deleting some number of characters from T (possibly 0, and the characters are chosen anywhere from T) results in the string S.)
 
Example 1:

Input: str1 = "abac", str2 = "cab"
Output: "cabac"
Explanation: 
str1 = "abac" is a subsequence of "cabac" because we can delete the first "c".
str2 = "cab" is a subsequence of "cabac" because we can delete the last "ac".
The answer provided is the shortest such string that satisfies these properties.

 
Note:

1 <= str1.length, str2.length <= 1000
str1 and str2 consist of lowercase English letters.

Tags: 
    1. Dynamic Programming

Similar Questions:
    1. Longest Common Subsequence

Hint 1:
We can find the length of the longest common subsequence between str1[i:] and str2[j:] (for all (i, j)) by using dynamic programming.  We can use this information to recover the longest common supersequence.

*/

class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        
    }
};

TEST_CASE("shortest-common-supersequence", "[1092][Hard][dynamic-programming]") {
    //TODO
    CHECK(true);
}
