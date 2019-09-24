#include "LeetCode.hpp"

/*
1072. Flip Columns For Maximum Number of Equal Rows
Medium

Given a matrix consisting of 0s and 1s, we may choose any number of columns in the matrix and flip every cell in that column.  Flipping a cell changes the value of that cell from 0 to 1 or from 1 to 0.
Return the maximum number of rows that have all values equal after some number of flips.
 

Example 1:

Input: [[0,1],[1,1]]
Output: 1
Explanation: After flipping no values, 1 row has all values equal.

Example 2:

Input: [[0,1],[1,0]]
Output: 2
Explanation: After flipping values in the first column, both rows have equal values.

Example 3:

Input: [[0,0,0],[0,0,1],[1,1,0]]
Output: 2
Explanation: After flipping values in the first two columns, the last two rows have equal values.

 
Note:

1 <= matrix.length <= 300
1 <= matrix[i].length <= 300
All matrix[i].length's are equal
matrix[i][j] is 0 or 1

Tags: 
    1. Hash Table

Hint 1:
Flipping a subset of columns is like doing a bitwise XOR of some number K onto each row.  We want rows X with X ^ K = all 0s or all 1s.  This is the same as X = X^K ^K = (all 0s or all 1s) ^ K, so we want to count rows that have opposite bits set.  For example, if K = 1, then we count rows X = (00000...001, or 1111....110).

*/

class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        
    }
};

TEST_CASE("flip-columns-for-maximum-number-of-equal-rows", "[1072][Medium][hash-table]") {
    //TODO
    CHECK(true);
}

