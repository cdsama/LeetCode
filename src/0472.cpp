#include "LeetCode.hpp"

/*
472. Concatenated Words
Hard

Given a list of words (without duplicates), please write a program that returns all concatenated words in the given list of words.
A concatenated word is defined as a string that is comprised entirely of at least two shorter words in the given array.
Example:

Input: ["cat","cats","catsdogcats","dog","dogcatsdog","hippopotamuses","rat","ratcatdogcat"]

Output: ["catsdogcats","dogcatsdog","ratcatdogcat"]

Explanation: "catsdogcats" can be concatenated by "cats", "dog" and "cats";  "dogcatsdog" can be concatenated by "dog", "cats" and "dog"; "ratcatdogcat" can be concatenated by "rat", "cat", "dog" and "cat".

Note:

The number of elements of the given array will not exceed 10,000 
The length sum of elements in the given array will not exceed 600,000. 
All the input string will only include lower case letters.
The returned elements order does not matter. 

Tags: 
    1. Dynamic Programming
    2. Depth-first Search
    3. Trie

Similar Questions:
    1. Word Break II

*/

class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        
    }
};

TEST_CASE("concatenated-words", "[472][Hard][dynamic-programming][depth-first-search][trie]") {
    //TODO
    CHECK(true);
}

