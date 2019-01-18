#include "LeetCode.hpp"

/*
473. Matchsticks to Square
Medium

Remember the story of Little Match Girl? By now, you know exactly what matchsticks the little match girl has, please find out a way you can make one square by using up all those matchsticks. You should not break any stick, but you can link them up, and each matchstick must be used exactly one time.
 Your input will be several matchsticks the girl has, represented with their stick length. Your output will either be true or false, to represent whether you could make one square using all the matchsticks the little match girl has.
Example 1:

Input: [1,1,2,2,2]
Output: true

Explanation: You can form a square with length 2, one side of the square came two sticks with length 1.

Example 2:

Input: [3,3,3,3,4]
Output: false

Explanation: You cannot find a way to form a square with all the matchsticks.

Note:

The length sum of the given matchsticks is in the range of 0 to 10^9.
The length of the given matchstick array will not exceed 15.

Tags: 
    1. Depth-first Search

Hint 1:
Treat the matchsticks as an array. Can we split the array into 4 equal halves?

Hint 2:
Every matchstick can belong to either of the 4 sides. We don't know which one. Maybe try out all options!

Hint 3:
For every matchstick, we have to try out each of the 4 options i.e. which side it can belong to. We can make use of recursion for this.

Hint 4:
We don't really need to keep track of which matchsticks belong to a particular side during recursion. We just need to keep track of the length of each of the 4 sides.

Hint 5:
When all matchsticks have been used we simply need to see the length of all 4 sides. If they're equal, we have a square on our hands!

*/

class Solution {
public:
    bool makesquare(vector<int>& nums) {
        
    }
};

TEST_CASE("matchsticks-to-square", "[473][Medium][depth-first-search]") {
    //TODO
    CHECK(true);
}

