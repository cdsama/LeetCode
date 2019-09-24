#include "LeetCode.hpp"

/*
1170. Compare Strings by Frequency of the Smallest Character
Easy

Let's define a function f(s) over a non-empty string s, which calculates the frequency of the smallest character in s. For example, if s = "dcce" then f(s) = 2 because the smallest character is "c" and its frequency is 2.
Now, given string arrays queries and words, return an integer array answer, where each answer[i] is the number of words such that f(queries[i]) < f(W), where W is a word in words.
 
Example 1:

Input: queries = ["cbd"], words = ["zaaaz"]
Output: [1]
Explanation: On the first query we have f("cbd") = 1, f("zaaaz") = 3 so f("cbd") < f("zaaaz").

Example 2:

Input: queries = ["bbb","cc"], words = ["a","aa","aaa","aaaa"]
Output: [1,2]
Explanation: On the first query only f("bbb") < f("aaaa"). On the second query both f("aaa") and f("aaaa") are both > f("cc").

 
Constraints:

1 <= queries.length <= 2000
1 <= words.length <= 2000
1 <= queries[i].length, words[i].length <= 10
queries[i][j], words[i][j] are English lowercase letters.

Tags: 
    1. Array
    2. String

Hint 1:
For each string from words calculate the leading count and store it in an array, then sort the integer array.

Hint 2:
For each string from queries calculate the leading count "p" and in base of the sorted array calculated on the step 1 do a binary search to count the number of items greater than "p".

*/

class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        
    }
};

TEST_CASE("compare-strings-by-frequency-of-the-smallest-character", "[1170][Easy][array][string]") {
    //TODO
    CHECK(true);
}

