#include "LeetCode.hpp"

/*
393. UTF-8 Validation
Medium

A character in UTF8 can be from 1 to 4 bytes long, subjected to the following rules:

For 1-byte character, the first bit is a 0, followed by its unicode code.
For n-bytes character, the first n-bits are all one's, the n+1 bit is 0, followed by n-1 bytes with most significant 2 bits being 10.

This is how the UTF-8 encoding would work:
   Char. number range  |        UTF-8 octet sequence
      (hexadecimal)    |              (binary)
   --------------------+---------------------------------------------
   0000 0000-0000 007F | 0xxxxxxx
   0000 0080-0000 07FF | 110xxxxx 10xxxxxx
   0000 0800-0000 FFFF | 1110xxxx 10xxxxxx 10xxxxxx
   0001 0000-0010 FFFF | 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx

Given an array of integers representing the data, return whether it is a valid utf-8 encoding.

Note:
The input is an array of integers. Only the least significant 8 bits of each integer is used to store the data. This means each integer represents only 1 byte of data.

Example 1:

data = [197, 130, 1], which represents the octet sequence: 11000101 10000010 00000001.

Return true.
It is a valid utf-8 encoding for a 2-bytes character followed by a 1-byte character.

Example 2:

data = [235, 140, 4], which represented the octet sequence: 11101011 10001100 00000100.

Return false.
The first 3 bits are all one's and the 4th bit is 0 means it is a 3-bytes character.
The next byte is a continuation byte which starts with 10 and that's correct.
But the second continuation byte does not start with 10, so it is invalid.

Tags: 
    1. Bit Manipulation

Hint 1:
All you have to do is follow the rules. For a given integer, obtain its binary representation in the string form and work with the rules given in the problem.

Hint 2:
An integer can either represent the start of a UTF-8 character, or a part of an existing UTF-8 character. There are two separate rules for these two scenarios in the problem.

Hint 3:
If an integer is a part of an existing UTF-8 character, simply check the 2 most significant bits of in the binary representation string. They should be 10. If the integer represents the start of a UTF-8 character, then the first few bits would be 1 followed by a 0. The number of initial bits (most significant) bits determines the length of the UTF-8 character. 

Note: The array can contain multiple valid UTF-8 characters.

Hint 4:
String manipulation will work fine here. But, it is too slow. Can we instead use bit manipulation to do the validations instead of string manipulations?

Hint 5:
We can use bit masking to check how many initial bits are set for a given number. We only need to work with the 8 least significant bits as mentioned in the problem.

mask = 1 << 7
while mask & num:
    n_bytes += 1
    mask = mask >> 1

Can you use bit-masking to perform the second validation as well i.e. checking if the most significant bit is 1 and the second most significant bit a 0?

Hint 6:
To check if the most significant bit is a 1 and the second most significant bit is a 0, we can make use of the following two masks.

mask1 = 1 << 7
mask2 = 1 << 6

if not (num & mask1 and not (num & mask2)):
    return False

*/

class Solution {
public:
    bool validUtf8(vector<int>& data) {
        
    }
};

TEST_CASE("utf-8-validation", "[393][Medium][bit-manipulation]") {
    //TODO
    CHECK(true);
}

