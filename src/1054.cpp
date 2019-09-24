#include "LeetCode.hpp"

/*
1054. Distant Barcodes
Medium

In a warehouse, there is a row of barcodes, where the i-th barcode is barcodes[i].
Rearrange the barcodes so that no two adjacent barcodes are equal.  You may return any answer, and it is guaranteed an answer exists.
 
Example 1:

Input: [1,1,1,2,2,2]
Output: [2,1,2,1,2,1]

Example 2:

Input: [1,1,1,1,2,2,3,3]
Output: [1,3,1,3,2,1,2,1]

 
Note:

1 <= barcodes.length <= 10000
1 <= barcodes[i] <= 10000

 

Tags: 
    1. Heap
    2. Sort

Hint 1:
We want to always choose the most common or second most common element to write next.  What data structure allows us to query this effectively?

*/

class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        
    }
};

TEST_CASE("distant-barcodes", "[1054][Medium][heap][sort]") {
    //TODO
    CHECK(true);
}

