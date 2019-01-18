#include "LeetCode.hpp"

/*
113. Path Sum II
Medium

Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.
Note: A leaf is a node with no children.
Example:
Given the below binary tree and sum = 22,

      5
     / \
    4   8
   /   / \
  11  13  4
 /  \    / \
7    2  5   1

Return:

[
   [5,4,11,2],
   [5,8,4,5]
]

Tags: 
    1. Tree
    2. Depth-first Search

Similar Questions:
    1. Path Sum
    2. Binary Tree Paths
    3. Path Sum III
    4. Path Sum IV

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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
    }
};

TEST_CASE("path-sum-ii", "[113][Medium][tree][depth-first-search]") {
    //TODO
    CHECK(true);
}

