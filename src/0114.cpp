#include "LeetCode.hpp"

/*
114. Flatten Binary Tree to Linked List
Medium

Given a binary tree, flatten it to a linked list in-place.
For example, given the following tree:

    1
   / \
  2   5
 / \   \
3   4   6

The flattened tree should look like:

1
 \
  2
   \
    3
     \
      4
       \
        5
         \
          6

Tags: 
    1. Tree
    2. Depth-first Search

Similar Questions:
    1. Flatten a Multilevel Doubly Linked List

Hint 1:
If you notice carefully in the flattened tree, each node's right child points to the next node of a pre-order traversal.

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
    void flatten(TreeNode* root) {
        
    }
};

TEST_CASE("flatten-binary-tree-to-linked-list", "[114][Medium][tree][depth-first-search]") {
    //TODO
    CHECK(true);
}

