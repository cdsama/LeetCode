#include "LeetCode.hpp"

/*
1023. Camelcase Matching
Medium

A query word matches a given pattern if we can insert lowercase letters to the pattern word so that it equals the query. (We may insert each character at any position, and may insert 0 characters.)
Given a list of queries, and a pattern, return an answer list of booleans, where answer[i] is true if and only if queries[i] matches the pattern.
 
Example 1:

Input: queries = ["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"], pattern = "FB"
Output: [true,false,true,true,false]
Explanation: 
"FooBar" can be generated like this "F" + "oo" + "B" + "ar".
"FootBall" can be generated like this "F" + "oot" + "B" + "all".
"FrameBuffer" can be generated like this "F" + "rame" + "B" + "uffer".
Example 2:

Input: queries = ["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"], pattern = "FoBa"
Output: [true,false,true,false,false]
Explanation: 
"FooBar" can be generated like this "Fo" + "o" + "Ba" + "r".
"FootBall" can be generated like this "Fo" + "ot" + "Ba" + "ll".

Example 3:

Input: queries = ["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"], pattern = "FoBaT"
Output: [false,true,false,false,false]
Explanation: 
"FooBarTest" can be generated like this "Fo" + "o" + "Ba" + "r" + "T" + "est".

 
Note:

1 <= queries.length <= 100
1 <= queries[i].length <= 100
1 <= pattern.length <= 100
All strings consists only of lower and upper case English letters.

Tags: 
    1. String
    2. Trie

Hint 1:
Given a single pattern and word, how can we solve it?

Hint 2:
One way to do it is using a DP (pos1, pos2) where pos1 is a pointer to the word and pos2 to the pattern and returns true if we can match the pattern with the given word.

Hint 3:
We have two scenarios: The first one is when `word[pos1] == pattern[pos2]`, then the transition will be just DP(pos1 + 1, pos2 + 1). The second scenario is when `word[pos1]` is lowercase then we can add this character to the pattern so that the transition is just DP(pos1 + 1, pos2)
The case base is `if (pos1 == n && pos2 == m) return true;` Where n and m are the sizes of the strings word and pattern respectively.

*/

class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        
    }
};

TEST_CASE("camelcase-matching", "[1023][Medium][string][trie]") {
    //TODO
    CHECK(true);
}

