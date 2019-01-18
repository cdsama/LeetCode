#include "LeetCode.hpp"

/*
99. Recover Binary Search Tree
Hard

Two elements of a binary search tree (BST) are swapped by mistake.
Recover the tree without changing its structure.
Example 1:

Input: [1,3,null,null,2]

   1
  /
 3
  \
   2

Output: [3,1,null,null,2]

   3
  /
 1
  \
   2

Example 2:

Input: [3,1,4,null,null,2]

  3
 / \
1   4
   /
  2

Output: [2,1,4,null,null,3]

  2
 / \
1   4
   /
  3

Follow up:

A solution using O(n) space is pretty straight forward.
Could you devise a constant space solution?

Tags: 
    1. Tree
    2. Depth-first Search

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
    void recoverTree(TreeNode* root) {
        
    }
};

TEST_CASE("recover-binary-search-tree", "[99][Hard][tree][depth-first-search]") {
    //TODO
    CHECK(true);
}

