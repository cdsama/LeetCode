#include "LeetCode.hpp"

/*
1161. Maximum Level Sum of a Binary Tree
Medium

Given the root of a binary tree, the level of its root is 1, the level of its children is 2, and so on.
Return the smallest level X such that the sum of all the values of nodes at level X is maximal.
 
Example 1:

Input: [1,7,0,7,-8,null,null]
Output: 2
Explanation: 
Level 1 sum = 1.
Level 2 sum = 7 + 0 = 7.
Level 3 sum = 7 + -8 = -1.
So we return the level with the maximum sum which is level 2.

 
Note:

The number of nodes in the given tree is between 1 and 10^4.
-10^5 <= node.val <= 10^5

Tags: 
    1. Graph

Hint 1:
Calculate the sum for each level then find the level with the maximum sum.

Hint 2:
How can you traverse the tree ?

Hint 3:
How can you sum up the values for every level ?

Hint 4:
Use DFS or BFS to traverse the tree keeping the level of each node, and sum up those values with a map or a frequency array.

*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        
    }
};

TEST_CASE("maximum-level-sum-of-a-binary-tree", "[1161][Medium][graph]") {
    //TODO
    CHECK(true);
}

