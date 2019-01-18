#include "LeetCode.hpp"

/*
575. Distribute Candies
Easy

Given an integer array with even length, where different numbers in this array represent different kinds of candies. Each number means one candy of the corresponding kind. You need to distribute these candies equally in number to brother and sister. Return the maximum number of kinds of candies the sister could gain. 

Example 1:

Input: candies = [1,1,2,2,3,3]
Output: 3
Explanation:
There are three different kinds of candies (1, 2 and 3), and two candies for each kind.
Optimal distribution: The sister has candies [1,2,3] and the brother has candies [1,2,3], too. 
The sister has three different kinds of candies. 

Example 2:

Input: candies = [1,1,2,3]
Output: 2
Explanation: For example, the sister has candies [2,3] and the brother has candies [1,1]. 
The sister has two different kinds of candies, the brother has only one kind of candies. 

Note:

The length of the given array is in range [2, 10,000], and will be even.
The number in given array is in range [-100,000, 100,000].

Tags: 
    1. Hash Table

Hint 1:
To maximize the number of kinds of candies, we should try to distribute candies such that sister will gain all kinds.

Hint 2:
What is the upper limit of the number of kinds of candies sister will gain? Remember candies are to distributed equally.

Hint 3:
Which data structure is the most suitable for finding the number of kinds of candies?

Hint 4:
Will hashset solves the problem? Inserting all candies kind in the hashset and then checking its size with upper limit.

*/

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        
    }
};

TEST_CASE("distribute-candies", "[575][Easy][hash-table]") {
    //TODO
    CHECK(true);
}

