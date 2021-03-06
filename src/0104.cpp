#include "LeetCode.hpp"

/*
104. Maximum Depth of Binary Tree
Easy

Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root
node down to the farthest leaf node.

Note: A leaf is a node with no children.

Example:

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its depth = 3.

Tags:
    1. Tree
    2. Depth-first Search

Similar Questions:
    1. Balanced Binary Tree
    2. Minimum Depth of Binary Tree
    3. Maximum Depth of N-ary Tree

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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

TEST_CASE("maximum-depth-of-binary-tree",
          "[104][Easy][tree][depth-first-search]") {
    Solution s;
    CHECK(s.maxDepth(TREE()) == 0);
    CHECK(s.maxDepth(TREE(1)) == 1);
    CHECK(s.maxDepth(TREE(1, 2)) == 2);
    CHECK(s.maxDepth(TREE(1, 2, 3, 4)) == 3);
    CHECK(s.maxDepth(TREE(3, 9, 20, {}, {}, 15, 7)) == 3);
}
