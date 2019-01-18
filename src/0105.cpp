#include "LeetCode.hpp"

/*
105. Construct Binary Tree from Preorder and Inorder Traversal
Medium

Given preorder and inorder traversal of a tree, construct the binary tree.
Note:
You may assume that duplicates do not exist in the tree.
For example, given

preorder = [3,9,20,15,7]
inorder = [9,3,15,20,7]
Return the following binary tree:

    3
   / \
  9  20
    /  \
   15   7

Tags: 
    1. Array
    2. Tree
    3. Depth-first Search

Similar Questions:
    1. Construct Binary Tree from Inorder and Postorder Traversal

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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
    }
};

TEST_CASE("construct-binary-tree-from-preorder-and-inorder-traversal", "[105][Medium][array][tree][depth-first-search]") {
    //TODO
    CHECK(true);
}

