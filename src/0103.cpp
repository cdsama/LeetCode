#include "LeetCode.hpp"

/*
103. Binary Tree Zigzag Level Order Traversal
Medium

Given a binary tree, return the zigzag level order traversal of its nodes' values. (ie, from left to right, then right to left for the next level and alternate between).

For example:
Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7

return its zigzag level order traversal as:

[
  [3],
  [20,9],
  [15,7]
]

Tags: 
    1. Stack
    2. Tree
    3. Breadth-first Search

Similar Questions:
    1. Binary Tree Level Order Traversal

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
    }
};

TEST_CASE("binary-tree-zigzag-level-order-traversal", "[103][Medium][stack][tree][breadth-first-search]") {
    //TODO
    CHECK(true);
}

