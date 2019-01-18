#include "LeetCode.hpp"

/*
199. Binary Tree Right Side View
Medium

Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.
Example:

Input: [1,2,3,null,5,null,4]
Output: [1, 3, 4]
Explanation:

   1            <---
 /   \
2     3         <---
 \     \
  5     4       <---

Tags: 
    1. Tree
    2. Depth-first Search
    3. Breadth-first Search

Similar Questions:
    1. Populating Next Right Pointers in Each Node
    2. Boundary of Binary Tree

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
    vector<int> rightSideView(TreeNode* root) {
        
    }
};

TEST_CASE("binary-tree-right-side-view", "[199][Medium][tree][depth-first-search][breadth-first-search]") {
    //TODO
    CHECK(true);
}

