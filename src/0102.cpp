#include "LeetCode.hpp"

/*
102. Binary Tree Level Order Traversal
Medium

Given a binary tree, return the level order traversal of its nodes' values. (ie,
from left to right, level by level).

For example:
Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7

return its level order traversal as:

[
  [3],
  [9,20],
  [15,7]
]

Tags:
    1. Tree
    2. Breadth-first Search

Similar Questions:
    1. Binary Tree Zigzag Level Order Traversal
    2. Binary Tree Level Order Traversal II
    3. Minimum Depth of Binary Tree
    4. Binary Tree Vertical Order Traversal
    5. Average of Levels in Binary Tree
    6. N-ary Tree Level Order Traversal

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        if (root == nullptr) {
            return ret;
        }
        deque<TreeNode*> q;
        q.push_back(root);
        while (!q.empty()) {
            size_t level_size = q.size();
            vector<int> level;
            level.reserve(level_size);
            for (size_t i = 0; i < level_size; ++i) {
                auto front = q.front();
                q.pop_front();
                level.emplace_back(front->val);
                if (front->left != nullptr) {
                    q.push_back(front->left);
                }
                if (front->right != nullptr) {
                    q.push_back(front->right);
                }
            }
            ret.push_back(move(level));
        }
        return ret;
    }
};

TEST_CASE("binary-tree-level-order-traversal",
          "[102][Medium][tree][breadth-first-search]") {
    Solution s;
    vector<vector<int>> ans = {{3}, {9, 20}, {15, 7}};
    CHECK(s.levelOrder(TREE(3, 9, 20, {}, {}, 15, 7)) == ans);
}
