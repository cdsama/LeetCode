#include "LeetCode.hpp"

/*
1202. Smallest String With Swaps
Medium

You are given a string s, and an array of pairs of indices in the string pairs where pairs[i] = [a, b] indicates 2 indices(0-indexed) of the string.
You can swap the characters at any pair of indices in the given pairs any number of times.
Return the lexicographically smallest string that s can be changed to after using the swaps.
 
Example 1:

Input: s = "dcab", pairs = [[0,3],[1,2]]
Output: "bacd"
Explaination: 
Swap s[0] and s[3], s = "bcad"
Swap s[1] and s[2], s = "bacd"

Example 2:

Input: s = "dcab", pairs = [[0,3],[1,2],[0,2]]
Output: "abcd"
Explaination: 
Swap s[0] and s[3], s = "bcad"
Swap s[0] and s[2], s = "acbd"
Swap s[1] and s[2], s = "abcd"
Example 3:

Input: s = "cba", pairs = [[0,1],[1,2]]
Output: "abc"
Explaination: 
Swap s[0] and s[1], s = "bca"
Swap s[1] and s[2], s = "bac"
Swap s[0] and s[1], s = "abc"

 
Constraints:

1 <= s.length <= 10^5
0 <= pairs.length <= 10^5
0 <= pairs[i][0], pairs[i][1] < s.length
s only contains lower case English letters.

Tags: 
    1. Array
    2. Union Find

Hint 1:
Think of it as a graph problem.

Hint 2:
Consider the pairs as connected nodes in the graph, what can you do with a connected component of indices ?

Hint 3:
We can sort each connected component alone to get the lexicographically minimum string.

*/

class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        
    }
};

TEST_CASE("smallest-string-with-swaps", "[1202][Medium][array][union-find]") {
    //TODO
    CHECK(true);
}

