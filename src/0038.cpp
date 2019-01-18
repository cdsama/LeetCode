#include "LeetCode.hpp"

/*
38. Count and Say
Easy

The count-and-say sequence is the sequence of integers with the first five terms as following:

1.     1
2.     11
3.     21
4.     1211
5.     111221

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence.
Note: Each term of the sequence of integers will be represented as a string.

Example 1:

Input: 1
Output: "1"

Example 2:

Input: 4
Output: "1211"

Tags: 
    1. String

Similar Questions:
    1. Encode and Decode Strings
    2. String Compression

Hint 1:
The following are the terms from n=1 to n=10 of the count-and-say sequence:

 1.     1
 2.     11
 3.     21
 4.     1211
 5.     111221 
 6.     312211
 7.     13112221
 8.     1113213211
 9.     31131211131221
10.     13211311123113112211

Hint 2:
To generate the nth term, just count and say the n-1th term.

*/

class Solution {
public:
    string countAndSay(int n) {
        
    }
};

TEST_CASE("count-and-say", "[38][Easy][string]") {
    //TODO
    CHECK(true);
}

