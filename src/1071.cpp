#include "LeetCode.hpp"

/*
1071. Greatest Common Divisor of Strings
Easy

For strings S and T, we say "T divides S" if and only if S = T + ... + T  (T concatenated with itself 1 or more times)
Return the largest string X such that X divides str1 and X divides str2.
 
Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"

Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"

Example 3:

Input: str1 = "LEET", str2 = "CODE"
Output: ""

 
Note:

1 <= str1.length <= 1000
1 <= str2.length <= 1000
str1[i] and str2[i] are English uppercase letters.

Tags: 
    1. String

Hint 1:
The greatest common divisor must be a prefix of each string, so we can try all prefixes.

*/

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
    }
};

TEST_CASE("greatest-common-divisor-of-strings", "[1071][Easy][string]") {
    //TODO
    CHECK(true);
}

