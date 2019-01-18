#include "LeetCode.hpp"

/*
257. Binary Tree Paths
Easy

Given a binary tree, return all root-to-leaf paths.
Note: A leaf is a node with no children.
Example:

Input:

   1
 /   \
2     3
 \
  5

Output: ["1->2->5", "1->3"]

Explanation: All root-to-leaf paths are: 1->2->5, 1->3

Tags: 
    1. Tree
    2. Depth-first Search

Similar Questions:
    1. Path Sum II

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
    vector<string> binaryTreePaths(TreeNode* root) {
        
    }
};

TEST_CASE("binary-tree-paths", "[257][Easy][tree][depth-first-search]") {
    //TODO
    CHECK(true);
}

