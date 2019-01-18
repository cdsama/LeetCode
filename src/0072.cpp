#include "LeetCode.hpp"

/*
72. Edit Distance
Hard

Given two words word1 and word2, find the minimum number of operations required to convert word1 to word2.
You have the following 3 operations permitted on a word:

Insert a character
Delete a character
Replace a character

Example 1:

Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation: 
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')

Example 2:

Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation: 
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')

Tags: 
    1. String
    2. Dynamic Programming

Similar Questions:
    1. One Edit Distance
    2. Delete Operation for Two Strings
    3. Minimum ASCII Delete Sum for Two Strings

*/

class Solution {
public:
    int minDistance(string word1, string word2) {
        
    }
};

TEST_CASE("edit-distance", "[72][Hard][string][dynamic-programming]") {
    //TODO
    CHECK(true);
}

