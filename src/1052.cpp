#include "LeetCode.hpp"

/*
1052. Grumpy Bookstore Owner
Medium

Today, the bookstore owner has a store open for customers.length minutes.  Every minute, some number of customers (customers[i]) enter the store, and all those customers leave after the end of that minute.
On some minutes, the bookstore owner is grumpy.  If the bookstore owner is grumpy on the i-th minute, grumpy[i] = 1, otherwise grumpy[i] = 0.  When the bookstore owner is grumpy, the customers of that minute are not satisfied, otherwise they are satisfied.
The bookstore owner knows a secret technique to keep themselves not grumpy for X minutes straight, but can only use it once.
Return the maximum number of customers that can be satisfied throughout the day.
 
Example 1:

Input: customers = [1,0,1,2,1,1,7,5], grumpy = [0,1,0,1,0,1,0,1], X = 3
Output: 16
Explanation: The bookstore owner keeps themselves not grumpy for the last 3 minutes. 
The maximum number of customers that can be satisfied = 1 + 1 + 1 + 1 + 7 + 5 = 16.

 
Note:

1 <= X <= customers.length == grumpy.length <= 20000
0 <= customers[i] <= 1000
0 <= grumpy[i] <= 1

Tags: 
    1. Array
    2. Sliding Window

Hint 1:
Say the store owner uses their power in minute 1 to X and we have some answer A.  If they instead use their power from minute 2 to X+1, we only have to use data from minutes 1, 2, X and X+1 to update our answer A.

*/

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        
    }
};

TEST_CASE("grumpy-bookstore-owner", "[1052][Medium][array][sliding-window]") {
    //TODO
    CHECK(true);
}

