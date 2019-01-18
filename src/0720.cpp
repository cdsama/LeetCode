#include "LeetCode.hpp"

/*
720. Longest Word in Dictionary
Easy

Given a list of strings words representing an English Dictionary, find the longest word in words that can be built one character at a time by other words in words.  If there is more than one possible answer, return the longest word with the smallest lexicographical order.  If there is no answer, return the empty string.

Example 1:

Input: 
words = ["w","wo","wor","worl", "world"]
Output: "world"
Explanation: 
The word "world" can be built one character at a time by "w", "wo", "wor", and "worl".

Example 2:

Input: 
words = ["a", "banana", "app", "appl", "ap", "apply", "apple"]
Output: "apple"
Explanation: 
Both "apply" and "apple" can be built from other words in the dictionary. However, "apple" is lexicographically smaller than "apply".

Note:
All the strings in the input will only contain lowercase letters.
The length of words will be in the range [1, 1000].
The length of words[i] will be in the range [1, 30].

Tags: 
    1. Hash Table
    2. Trie

Similar Questions:
    1. Longest Word in Dictionary through Deleting
    2. Implement Magic Dictionary

Hint 1:
For every word in the input list, we can check whether all prefixes of that word are in the input list by using a Set.

*/

class Solution {
public:
    string longestWord(vector<string>& words) {
        
    }
};

TEST_CASE("longest-word-in-dictionary", "[720][Easy][hash-table][trie]") {
    //TODO
    CHECK(true);
}

