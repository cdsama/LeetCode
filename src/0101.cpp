#include "LeetCode.hpp"

/*
101. Symmetric Tree
Easy

Given a binary tree, check whether it is a mirror of itself (ie, symmetric
around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3

But the following [1,2,2,null,3,null,3] is not:

    1
   / \
  2   2
   \   \
   3    3

Note:
Bonus points if you could solve it both recursively and iteratively.

Tags:
    1. Tree
    2. Depth-first Search
    3. Breadth-first Search

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
    static bool isMirrorTree(TreeNode* p, TreeNode* q) {
        return (p == nullptr || q == nullptr)
                   ? (p == q)
                   : ((p->val == q->val) && isMirrorTree(p->left, q->right) &&
                      isMirrorTree(p->right, q->left));
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        return isMirrorTree(root->left, root->right);
    }
};

class Solution2 {
   public:
    bool isMirrorTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr || q == nullptr) {
            return p == q;
        }
        stack<pair<TreeNode*, TreeNode*>> st;
        st.push({p, q});
        while (!st.empty()) {
            auto pair = st.top();
            st.pop();
            auto pp = pair.first;
            auto qq = pair.second;
            if (pp == nullptr && qq == nullptr) {
                continue;
            }
            if (pp == nullptr || qq == nullptr) {
                return false;
            }
            if (pp->val != qq->val) {
                return false;
            }
            st.push({pp->left, qq->right});
            st.push({pp->right, qq->left});
        }
        return true;
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        return isMirrorTree(root->left, root->right);
    }
};

TEST_CASE("symmetric-tree",
          "[101][Easy][tree][depth-first-search][breadth-first-search]") {
    {
        Solution s;
        CHECK(s.isSymmetric(TREE()) == true);
        CHECK(s.isSymmetric(TREE(2, 3, 3, 4, 5, 5)) == false);
        CHECK(s.isSymmetric(TREE(1, 2, 2, 3, 4, 4, 3)) == true);
        CHECK(s.isSymmetric(TREE(1, 2, 2, {}, 3, {}, 3)) == false);
    }
    {
        Solution2 s;
        CHECK(s.isSymmetric(TREE()) == true);
        CHECK(s.isSymmetric(TREE(2, 3, 3, 4, 5, 5)) == false);
        CHECK(s.isSymmetric(TREE(1, 2, 2, 3, 4, 4, 3)) == true);
        CHECK(s.isSymmetric(TREE(1, 2, 2, {}, 3, {}, 3)) == false);
    }
}
