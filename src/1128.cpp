#include "LeetCode.hpp"

/*
1128. Number of Equivalent Domino Pairs
Easy

Given a list of dominoes, dominoes[i] = [a, b] is equivalent to dominoes[j] = [c, d] if and only if either (a==c and b==d), or (a==d and b==c) - that is, one domino can be rotated to be equal to another domino.
Return the number of pairs (i, j) for which 0 <= i < j < dominoes.length, and dominoes[i] is equivalent to dominoes[j].
 
Example 1:
Input: dominoes = [[1,2],[2,1],[3,4],[5,6]]
Output: 1

 
Constraints:

1 <= dominoes.length <= 40000
1 <= dominoes[i][j] <= 9

Tags: 
    1. Array

Hint 1:
For each domino j, find the number of dominoes you've already seen (dominoes i with i < j) that are equivalent.

Hint 2:
You can keep track of what you've seen using a hashmap.

*/

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        
    }
};

TEST_CASE("number-of-equivalent-domino-pairs", "[1128][Easy][array]") {
    //TODO
    CHECK(true);
}

