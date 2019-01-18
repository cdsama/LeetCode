#include "LeetCode.hpp"

/*
140. Word Break II
Hard

Given a non-empty string s and a dictionary wordDict containing a list of non-empty words, add spaces in s to construct a sentence where each word is a valid dictionary word. Return all such possible sentences.
Note:

The same word in the dictionary may be reused multiple times in the segmentation.
You may assume the dictionary does not contain duplicate words.

Example 1:

Input:
s = "catsanddog"
wordDict = ["cat", "cats", "and", "sand", "dog"]
Output:
[
  "cats and dog",
  "cat sand dog"
]

Example 2:

Input:
s = "pineapplepenapple"
wordDict = ["apple", "pen", "applepen", "pine", "pineapple"]
Output:
[
  "pine apple pen apple",
  "pineapple pen apple",
  "pine applepen apple"
]
Explanation: Note that you are allowed to reuse a dictionary word.

Example 3:

Input:
s = "catsandog"
wordDict = ["cats", "dog", "sand", "and", "cat"]
Output:
[]

Tags: 
    1. Dynamic Programming
    2. Backtracking

Similar Questions:
    1. Word Break
    2. Concatenated Words

*/

class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        
    }
};

TEST_CASE("word-break-ii", "[140][Hard][dynamic-programming][backtracking]") {
    //TODO
    CHECK(true);
}

