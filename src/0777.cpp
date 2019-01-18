#include "LeetCode.hpp"

/*
777. Swap Adjacent in LR String
Medium

In a string composed of 'L', 'R', and 'X' characters, like "RXXLRXRXL", a move consists of either replacing one occurrence of "XL" with "LX", or replacing one occurrence of "RX" with "XR". Given the starting string start and the ending string end, return True if and only if there exists a sequence of moves to transform one string to the other.
Example:

Input: start = "RXXLRXRXL", end = "XRLXXRRLX"
Output: True
Explanation:
We can transform start to end following these steps:
RXXLRXRXL ->
XRXLRXRXL ->
XRLXRXRXL ->
XRLXXRRXL ->
XRLXXRRLX

Note:

1 <= len(start) = len(end) <= 10000.
Both start and end will only consist of characters in {'L', 'R', 'X'}.

Tags: 
    1. Brainteaser

Hint 1:
Think of the L and R's as people on a horizontal line, where X is a space.  The people can't cross each other, and also you can't go from XRX to RXX.

*/

class Solution {
public:
    bool canTransform(string start, string end) {
        
    }
};

TEST_CASE("swap-adjacent-in-lr-string", "[777][Medium][brainteaser]") {
    //TODO
    CHECK(true);
}

