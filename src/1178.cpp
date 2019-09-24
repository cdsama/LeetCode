#include "LeetCode.hpp"

/*
1178. Number of Valid Words for Each Puzzle
Hard

With respect to a given puzzle string, a word is valid if both the following conditions are satisfied:

word contains the first letter of puzzle.
For each letter in word, that letter is in puzzle.
	For example, if the puzzle is "abcdefg", then valid words are "faced", "cabbage", and "baggage"; while invalid words are "beefed" (doesn't include "a") and "based" (includes "s" which isn't in the puzzle).

Return an array answer, where answer[i] is the number of words in the given word list words that are valid with respect to the puzzle puzzles[i].
 
Example :

Input: 
words = ["aaaa","asas","able","ability","actt","actor","access"], 
puzzles = ["aboveyz","abrodyz","abslute","absoryz","actresz","gaswxyz"]
Output: [1,1,3,2,4,0]
Explanation:
1 valid word for "aboveyz" : "aaaa" 
1 valid word for "abrodyz" : "aaaa"
3 valid words for "abslute" : "aaaa", "asas", "able"
2 valid words for "absoryz" : "aaaa", "asas"
4 valid words for "actresz" : "aaaa", "asas", "actt", "access"
There're no valid words for "gaswxyz" cause none of the words in the list contains letter 'g'.

 
Constraints:

1 <= words.length <= 10^5
4 <= words[i].length <= 50
1 <= puzzles.length <= 10^4
puzzles[i].length == 7
words[i][j], puzzles[i][j] are English lowercase letters.
Each puzzles[i] doesn't contain repeated characters.

Tags: 
    1. Hash Table
    2. Bit Manipulation

Hint 1:
Exploit the fact that the length of the puzzle is only 7.

Hint 2:
Use bit-masks to represent the word and puzzle strings.

Hint 3:
For each puzzle, count the number of words whose bit-mask is a sub-mask of the puzzle's bit-mask.

*/

class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        
    }
};

TEST_CASE("number-of-valid-words-for-each-puzzle", "[1178][Hard][hash-table][bit-manipulation]") {
    //TODO
    CHECK(true);
}

