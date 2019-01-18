#include "LeetCode.hpp"

/*
211. Add and Search Word - Data structure design
Medium

Design a data structure that supports the following two operations:

void addWord(word)
bool search(word)

search(word) can search a literal word or a regular expression string containing only letters a-z or .. A . means it can represent any one letter.
Example:

addWord("bad")
addWord("dad")
addWord("mad")
search("pad") -> false
search("bad") -> true
search(".ad") -> true
search("b..") -> true

Note:
You may assume that all words are consist of lowercase letters a-z.

Tags: 
    1. Backtracking
    2. Design
    3. Trie

Similar Questions:
    1. Implement Trie (Prefix Tree)
    2. Prefix and Suffix Search

Hint 1:
You should be familiar with how a Trie works. If not, please work on this problem: Implement Trie (Prefix Tree) first.

*/

class WordDictionary {
public:
    /** Initialize your data structure here. */
    WordDictionary() {
        
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * bool param_2 = obj.search(word);
 */

TEST_CASE("add-and-search-word-data-structure-design", "[211][Medium][backtracking][design][trie]") {
    //TODO
    CHECK(true);
}

