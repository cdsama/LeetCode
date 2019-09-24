#include "LeetCode.hpp"

/*
1048. Longest String Chain
Medium

Given a list of words, each word consists of English lowercase letters.
Let's say word1 is a predecessor of word2 if and only if we can add exactly one letter anywhere in word1 to make it equal to word2.  For example, "abc" is a predecessor of "abac".
A word chain is a sequence of words [word_1, word_2, ..., word_k] with k >= 1, where word_1 is a predecessor of word_2, word_2 is a predecessor of word_3, and so on.
Return the longest possible length of a word chain with words chosen from the given list of words.
 
Example 1:

Input: ["a","b","ba","bca","bda","bdca"]
Output: 4
Explanation: one of the longest word chain is "a","ba","bda","bdca".

 
Note:

1 <= words.length <= 1000
1 <= words[i].length <= 16
words[i] only consists of English lowercase letters.

 

Tags: 
    1. Hash Table
    2. Dynamic Programming

Hint 1:
Instead of adding a character, try deleting a character to form a chain in reverse.

Hint 2:
For each word in order of length, for each word2 which is word with one character removed, length[word2] = max(length[word2], length[word] + 1).

*/

class Solution {
public:
    int longestStrChain(vector<string>& words) {
        
    }
};

TEST_CASE("longest-string-chain", "[1048][Medium][hash-table][dynamic-programming]") {
    //TODO
    CHECK(true);
}

