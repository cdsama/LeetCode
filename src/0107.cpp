#include "LeetCode.hpp"

/*
107. Binary Tree Level Order Traversal II
Easy

Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7

return its bottom-up level order traversal as:

[
  [15,7],
  [9,20],
  [3]
]

Tags: 
    1. Tree
    2. Breadth-first Search

Similar Questions:
    1. Binary Tree Level Order Traversal
    2. Average of Levels in Binary Tree

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
    }
};

TEST_CASE("binary-tree-level-order-traversal-ii", "[107][Easy][tree][breadth-first-search]") {
    //TODO
    CHECK(true);
}

