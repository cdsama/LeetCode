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

TEST_CASE(TEST_NAME, TEST_TAGS) {
    Solution s;
    vector<vector<int>> ans = {{3}, {9, 20}, {15, 7}};
    CHECK(s.levelOrder(TreeCreate({3, 9, 20, {}, {}, 15, 7})) == ans);
}