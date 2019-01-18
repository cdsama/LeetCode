#include "LeetCode.hpp"

/*
572. Subtree of Another Tree
Easy

Given two non-empty binary trees s and t, check whether tree t has exactly the same structure and node values with a subtree of s. A subtree of s is a tree consists of a node in s and all of this node's descendants. The tree s could also be considered as a subtree of itself.

Example 1:

Given tree s:

     3
    / \
   4   5
  / \
 1   2

Given tree t:

   4 
  / \
 1   2

Return true, because t has the same structure and node values with a subtree of s.

Example 2:

Given tree s:

     3
    / \
   4   5
  / \
 1   2
    /
   0

Given tree t:

   4
  / \
 1   2

Return false.

Tags: 
    1. Tree

Similar Questions:
    1. Count Univalue Subtrees
    2. Most Frequent Subtree Sum

Hint 1:
Which approach is better here- recursive or iterative?

Hint 2:
If recursive approach is better, can you write recursive function with its parameters?

Hint 3:
Two trees s and t are said to be identical if their root values are same and their left and right subtrees are identical. Can you write this in form of recursive formulae?

Hint 4:
Recursive formulae can be: 
isIdentical(s,t)= s.val==t.val AND isIdentical(s.left,t.left) AND isIdentical(s.right,t.right)

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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        
    }
};

TEST_CASE("subtree-of-another-tree", "[572][Easy][tree]") {
    //TODO
    CHECK(true);
}

