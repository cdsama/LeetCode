#include "LeetCode.hpp"

/*
739. Daily Temperatures
Medium

Given a list of daily temperatures T, return a list such that, for each day in the input, tells you how many days you would have to wait until a warmer temperature.  If there is no future day for which this is possible, put 0 instead.

For example, given the list of temperatures T = [73, 74, 75, 71, 69, 72, 76, 73], your output should be [1, 1, 4, 2, 1, 1, 0, 0].

Note:
The length of temperatures will be in the range [1, 30000].
Each temperature will be an integer in the range [30, 100].

Tags: 
    1. Hash Table
    2. Stack

Similar Questions:
    1. Next Greater Element I

Hint 1:
If the temperature is say, 70 today, then in the future a warmer temperature must be either 71, 72, 73, ..., 99, or 100.  We could remember when all of them occur next.

*/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        
    }
};

TEST_CASE("daily-temperatures", "[739][Medium][hash-table][stack]") {
    //TODO
    CHECK(true);
}

