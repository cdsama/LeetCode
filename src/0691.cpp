#include "LeetCode.hpp"

/*
691. Stickers to Spell Word
Hard

We are given N different types of stickers.  Each sticker has a lowercase English word on it.

You would like to spell out the given target string by cutting individual letters from your collection of stickers and rearranging them.

You can use each sticker more than once if you want, and you have infinite quantities of each sticker.

What is the minimum number of stickers that you need to spell out the target?  If the task is impossible, return -1.

Example 1:
Input:
["with", "example", "science"], "thehat"

Output:
3

Explanation:
We can use 2 "with" stickers, and 1 "example" sticker.
After cutting and rearrange the letters of those stickers, we can form the target "thehat".
Also, this is the minimum number of stickers necessary to form the target string.

Example 2:
Input:
["notice", "possible"], "basicbasic"

Output:
-1

Explanation:
We can't form the target "basicbasic" from cutting letters from the given stickers.

Note:
stickers has length in the range [1, 50].
stickers consists of lowercase English words (without apostrophes).
target has length in the range [1, 15], and consists of lowercase English letters.
In all test cases, all words were chosen randomly from the 1000 most common US English words, and the target was chosen as a concatenation of two random words.
The time limit may be more challenging than usual.  It is expected that a 50 sticker test case can be solved within 35ms on average.

Tags: 
    1. Dynamic Programming
    2. Backtracking

Similar Questions:
    1. Ransom Note

Hint 1:
We want to perform an exhaustive search, but we need to speed it up based on the input data being random.  

For all stickers, we can ignore any letters that are not in the target word.  

When our candidate answer won't be smaller than an answer we have already found, we can stop searching this path.  

When a sticker dominates another, we shouldn't include the dominated sticker in our sticker collection.  [Here, we say a sticker `A` dominates `B` if `A.count(letter) >= B.count(letter)` for all letters.]

*/

class Solution {
public:
    int minStickers(vector<string>& stickers, string target) {
        
    }
};

TEST_CASE("stickers-to-spell-word", "[691][Hard][dynamic-programming][backtracking]") {
    //TODO
    CHECK(true);
}

