#include "LeetCode.hpp"

/*
124. Binary Tree Maximum Path Sum
Hard

Given a non-empty binary tree, find the maximum path sum.
For this problem, a path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The path must contain at least one node and does not need to go through the root.
Example 1:

Input: [1,2,3]

       1
      / \
     2   3

Output: 6

Example 2:

Input: [-10,9,20,null,null,15,7]

   -10
   / \
  9  20
    /  \
   15   7

Output: 42

Tags: 
    1. Tree
    2. Depth-first Search

Similar Questions:
    1. Path Sum
    2. Sum Root to Leaf Numbers
    3. Path Sum IV
    4. Longest Univalue Path

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
    int maxPathSum(TreeNode* root) {
        
    }
};

TEST_CASE("binary-tree-maximum-path-sum", "[124][Hard][tree][depth-first-search]") {
    //TODO
    CHECK(true);
}

