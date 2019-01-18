#include "LeetCode.hpp"

/*
110. Balanced Binary Tree
Easy

Given a binary tree, determine if it is height-balanced.
For this problem, a height-balanced binary tree is defined as:

a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

Example 1:
Given the following tree [3,9,20,null,null,15,7]:

    3
   / \
  9  20
    /  \
   15   7
Return true.

Example 2:
Given the following tree [1,2,2,3,3,null,null,4,4]:

       1
      / \
     2   2
    / \
   3   3
  / \
 4   4

Return false.

Tags: 
    1. Tree
    2. Depth-first Search

Similar Questions:
    1. Maximum Depth of Binary Tree

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
    bool isBalanced(TreeNode* root) {
        
    }
};

TEST_CASE("balanced-binary-tree", "[110][Easy][tree][depth-first-search]") {
    //TODO
    CHECK(true);
}

