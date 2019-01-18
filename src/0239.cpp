#include "LeetCode.hpp"

/*
239. Sliding Window Maximum
Hard

Given an array nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position. Return the max sliding window.
Example:

Input: nums = [1,3,-1,-3,5,3,6,7], and k = 3
Output: [3,3,5,5,6,7] 
Explanation: 

Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7

Note: 
You may assume k is always valid, 1 ≤ k ≤ input array's size for non-empty array.
Follow up:
Could you solve it in linear time?

Tags: 
    1. Heap

Similar Questions:
    1. Minimum Window Substring
    2. Min Stack
    3. Longest Substring with At Most Two Distinct Characters
    4. Paint House II

Hint 1:
How about using a data structure such as deque (double-ended queue)?

Hint 2:
The queue size need not be the same as the window’s size.

Hint 3:
Remove redundant elements and the queue should store only elements that need to be considered.

*/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
    }
};

TEST_CASE("sliding-window-maximum", "[239][Hard][heap]") {
    //TODO
    CHECK(true);
}

