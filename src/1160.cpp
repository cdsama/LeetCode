#include "LeetCode.hpp"

/*
1160. Find Words That Can Be Formed by Characters
Easy

You are given an array of strings words and a string chars.
A string is good if it can be formed by characters from chars (each character can only be used once).
Return the sum of lengths of all good strings in words.
 
Example 1:

Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: 
The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.

Example 2:

Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
Output: 10
Explanation: 
The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.

 
Note:

1 <= words.length <= 1000
1 <= words[i].length, chars.length <= 100
All strings contain lowercase English letters only.

Tags: 
    1. Array
    2. Hash Table

Hint 1:
Solve the problem for each string in words independently.

Hint 2:
Now try to think in frequency of letters.

Hint 3:
Count how many times each character occurs in string chars.

Hint 4:
To form a string using characters from chars, the frequency of each character in chars must be greater than or equal the frequency of that character in the string to be formed.

*/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
    }
};

TEST_CASE("find-words-that-can-be-formed-by-characters", "[1160][Easy][array][hash-table]") {
    //TODO
    CHECK(true);
}

