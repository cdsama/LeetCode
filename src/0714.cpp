#include "LeetCode.hpp"

/*
714. Best Time to Buy and Sell Stock with Transaction Fee
Medium

Your are given an array of integers prices, for which the i-th element is the price of a given stock on day i; and a non-negative integer fee representing a transaction fee.
You may complete as many transactions as you like, but you need to pay the transaction fee for each transaction.  You may not buy more than 1 share of a stock at a time (ie. you must sell the stock share before you buy again.)
Return the maximum profit you can make.
Example 1:

Input: prices = [1, 3, 2, 8, 4, 9], fee = 2
Output: 8
Explanation: The maximum profit can be achieved by:
Buying at prices[0] = 1Selling at prices[3] = 8Buying at prices[4] = 4Selling at prices[5] = 9The total profit is ((8 - 1) - 2) + ((9 - 4) - 2) = 8.

Note:
0 < prices.length <= 50000.
0 < prices[i] < 50000.
0 <= fee < 50000.

Tags: 
    1. Array
    2. Dynamic Programming
    3. Greedy

Similar Questions:
    1. Best Time to Buy and Sell Stock II

Hint 1:
Consider the first K stock prices.  At the end, the only legal states are that you don't own a share of stock, or that you do.  Calculate the most profit you could have under each of these two cases.

*/

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        
    }
};

TEST_CASE("best-time-to-buy-and-sell-stock-with-transaction-fee", "[714][Medium][array][dynamic-programming][greedy]") {
    //TODO
    CHECK(true);
}

