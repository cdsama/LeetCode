#include "LeetCode.hpp"

/*
745. Prefix and Suffix Search
Hard

Given many words, words[i] has weight i.

Design a class WordFilter that supports one function, WordFilter.f(String prefix, String suffix).
It will return the word with given prefix and suffix with maximum weight.  If no word exists, return -1.

Examples:

Input:
WordFilter(["apple"])
WordFilter.f("a", "e") // returns 0
WordFilter.f("b", "") // returns -1

Note:

words has length in range [1, 15000].
For each test case, up to words.length queries WordFilter.f may be made.
words[i] has length in range [1, 10].
prefix, suffix have lengths in range [0, 10].
words[i] and prefix, suffix queries consist of lowercase letters only.

Tags: 
    1. Trie

Similar Questions:
    1. Add and Search Word - Data structure design

Hint 1:
For a word like "test", consider "#test", "t#test", "st#test", "est#test", "test#test".  Then if we have a query like prefix = "te", suffix = "t", we can find it by searching for something we've inserted starting with "t#te".

*/

class WordFilter {
public:
    WordFilter(vector<string> words) {
        
    }
    
    int f(string prefix, string suffix) {
        
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter obj = new WordFilter(words);
 * int param_1 = obj.f(prefix,suffix);
 */

TEST_CASE("prefix-and-suffix-search", "[745][Hard][trie]") {
    //TODO
    CHECK(true);
}

