#include "LeetCode.hpp"

/*
212. Word Search II
Hard

Given a 2D board and a list of words from the dictionary, find all words in the board.
Each word must be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once in a word.
Example:

Input: 
words = ["oath","pea","eat","rain"] and board =
[
  ['o','a','a','n'],
  ['e','t','a','e'],
  ['i','h','k','r'],
  ['i','f','l','v']
]

Output: ["eat","oath"]

Note:
You may assume that all inputs are consist of lowercase letters a-z.
Tags: 
    1. Backtracking
    2. Trie

Similar Questions:
    1. Word Search

Hint 1:
You would need to optimize your backtracking to pass the larger test. Could you stop backtracking earlier?

Hint 2:
If the current candidate does not exist in all words' prefix, you could stop backtracking immediately. What kind of data structure could answer such query efficiently? Does a hash table work? Why or why not? How about a Trie? If you would like to learn how to implement a basic trie, please work on this problem: Implement Trie (Prefix Tree) first.

*/

class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        
    }
};

TEST_CASE("word-search-ii", "[212][Hard][backtracking][trie]") {
    //TODO
    CHECK(true);
}

