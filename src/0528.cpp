#include "LeetCode.hpp"

/*
528. Random Pick with Weight
Medium

Given an array w of positive integers, where w[i] describes the weight of index i, write a function pickIndex which randomly picks an index in proportion to its weight.
Note:

1 <= w.length <= 10000
1 <= w[i] <= 10^5
pickIndex will be called at most 10000 times.

Example 1:

Input: 
["Solution","pickIndex"]
[[[1]],[]]
Output: [null,0]

Example 2:

Input: 
["Solution","pickIndex","pickIndex","pickIndex","pickIndex","pickIndex"]
[[[1,3]],[],[],[],[],[]]
Output: [null,0,1,1,1,0]

Explanation of Input Syntax:
The input is two lists: the subroutines called and their arguments. Solution's constructor has one argument, the array w. pickIndex has no arguments. Arguments are always wrapped with a list, even if there aren't any.

Tags: 
    1. Binary Search
    2. Random

Similar Questions:
    1. Random Pick Index
    2. Random Pick with Blacklist
    3. Random Point in Non-overlapping Rectangles

*/

class Solution {
public:
    Solution(vector<int> w) {
        
    }
    
    int pickIndex() {
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(w);
 * int param_1 = obj.pickIndex();
 */

TEST_CASE("random-pick-with-weight", "[528][Medium][binary-search][random]") {
    //TODO
    CHECK(true);
}

