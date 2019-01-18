#include "LeetCode.hpp"

/*
384. Shuffle an Array
Medium

Shuffle a set of numbers without duplicates.

Example:

// Init an array with set 1, 2, and 3.
int[] nums = {1,2,3};
Solution solution = new Solution(nums);

// Shuffle the array [1,2,3] and return its result. Any permutation of [1,2,3] must equally likely to be returned.
solution.shuffle();

// Resets the array back to its original configuration [1,2,3].
solution.reset();

// Returns the random shuffling of array [1,2,3].
solution.shuffle();

Hint 1:
The solution expects that we always use the original array to shuffle() else some of the test cases fail. (Credits; @snehasingh31)

*/

class Solution {
public:
    Solution(vector<int> nums) {
        
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */

TEST_CASE("shuffle-an-array", "[384][Medium]") {
    //TODO
    CHECK(true);
}

