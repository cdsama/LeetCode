#include "LeetCode.hpp"

/*
100. Same Tree
Easy

Given two binary trees, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical and
the nodes have the same value.

Example 1:
    Input:     1         1
             / \       / \
            2   3     2   3

            [1,2,3],   [1,2,3]

    Output: true

Example 2:
    Input:    1         1
             /           \
            2             2

            [1,2],     [1,null,2]
            

    Output: false


Example 3:
    Input:    1         1
             / \       / \
            2   1     1   2

            [1,2,1],   [1,1,2]

    Output: false
*/

class Solution {  // recursion
   public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return (p == nullptr || q == nullptr)
                   ? (p == q)
                   : ((p->val == q->val) && isSameTree(p->left, q->left) &&
                      isSameTree(p->right, q->right));
    }
};

class Solution2 {  // loop
   public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr || q == nullptr) {
            return p == q;
        }
        stack<pair<TreeNode*, TreeNode*>> st;
        st.push({p, q});
        while (!st.empty()) {
            auto pair = st.top();
            auto pp = pair.first;
            auto qq = pair.second;
            if (pp == nullptr || qq == nullptr) {
                return pp == qq;
            }
            if (pp->val != qq->val) {
                return false;
            }
            st.pop();
            st.push({pp->left, qq->left});
            st.push({pp->right, qq->right});
        }
        return false;
    }
};

TEST_CASE(TEST_NAME, TEST_TAGS) {
    {
        Solution s;
        CHECK(s.isSameTree(TreeCreate({}), TreeCreate({1, 2, 3})) == false);
        CHECK(s.isSameTree(TreeCreate({1, 2, 3}), TreeCreate({})) == false);
        CHECK(s.isSameTree(TreeCreate({}), TreeCreate({})) == true);
        CHECK(s.isSameTree(TreeCreate({1, 2, 3}), TreeCreate({1, 2, 3})) ==
              true);
        CHECK(s.isSameTree(TreeCreate({1, 2}), TreeCreate({1, {}, 2})) ==
              false);
        CHECK(s.isSameTree(TreeCreate({1, 2, 1}), TreeCreate({1, 1, 2})) ==
              false);
    }
    {
        Solution2 s;
        CHECK(s.isSameTree(TreeCreate({}), TreeCreate({1, 2, 3})) == false);
        CHECK(s.isSameTree(TreeCreate({1, 2, 3}), TreeCreate({})) == false);
        CHECK(s.isSameTree(TreeCreate({}), TreeCreate({})) == true);
        CHECK(s.isSameTree(TreeCreate({1, 2, 3}), TreeCreate({1, 2, 3})) ==
              true);
        CHECK(s.isSameTree(TreeCreate({1, 2}), TreeCreate({1, {}, 2})) ==
              false);
        CHECK(s.isSameTree(TreeCreate({1, 2, 1}), TreeCreate({1, 1, 2})) ==
              false);
    }
}