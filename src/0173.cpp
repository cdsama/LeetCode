#include "LeetCode.hpp"

/*
173. Binary Search Tree Iterator
Medium

Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST.
Calling next() will return the next smallest number in the BST.

Example:

BSTIterator iterator = new BSTIterator(root);
iterator.next();    // return 3
iterator.next();    // return 7
iterator.hasNext(); // return true
iterator.next();    // return 9
iterator.hasNext(); // return true
iterator.next();    // return 15
iterator.hasNext(); // return true
iterator.next();    // return 20
iterator.hasNext(); // return false

Note:

next() and hasNext() should run in average O(1) time and uses O(h) memory, where h is the height of the tree.
You may assume that next() call will always be valid, that is, there will be at least a next smallest number in the BST when next() is called.

Tags: 
    1. Stack
    2. Tree
    3. Design

Similar Questions:
    1. Binary Tree Inorder Traversal
    2. Flatten 2D Vector
    3. Zigzag Iterator
    4. Peeking Iterator
    5. Inorder Successor in BST

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
class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        
    }
    
    /** @return the next smallest number */
    int next() {
        
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

TEST_CASE("binary-search-tree-iterator", "[173][Medium][stack][tree][design]") {
    //TODO
    CHECK(true);
}

