#include "LeetCode.hpp"

/*
563. Binary Tree Tilt
Easy

Given a binary tree, return the tilt of the whole tree.
The tilt of a tree node is defined as the absolute difference between the sum of all left subtree node values and the sum of all right subtree node values. Null node has tilt 0.
The tilt of the whole tree is defined as the sum of all nodes' tilt.
Example:

Input: 
         1
       /   \
      2     3
Output: 1
Explanation: 
Tilt of node 2 : 0
Tilt of node 3 : 0
Tilt of node 1 : |2-3| = 1
Tilt of binary tree : 0 + 0 + 1 = 1

Note:

The sum of node values in any subtree won't exceed the range of 32-bit integer. 
All the tilt values won't exceed the range of 32-bit integer.

Tags: 
    1. Tree

Hint 1:
Don't think too much, this is an easy problem. Take some small tree as an example.

Hint 2:
Can a parent node use the values of its child nodes? How will you implement it?

Hint 3:
May be recursion and tree traversal can help you in implementing.

Hint 4:
What about postorder traversal, using values of left and right childs?

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
    int findTilt(TreeNode* root) {
        
    }
};

TEST_CASE("binary-tree-tilt", "[563][Easy][tree]") {
    //TODO
    CHECK(true);
}

