#include "LeetCode.hpp"

/*
449. Serialize and Deserialize BST
Medium

Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment.
Design an algorithm to serialize and deserialize a binary search tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary search tree can be serialized to a string and this string can be deserialized to the original tree structure.
The encoded string should be as compact as possible.
Note: Do not use class member/global/static variables to store states. Your serialize and deserialize algorithms should be stateless.

Tags: 
    1. Tree

Similar Questions:
    1. Serialize and Deserialize Binary Tree
    2. Find Duplicate Subtrees
    3. Serialize and Deserialize N-ary Tree

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
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));

TEST_CASE("serialize-and-deserialize-bst", "[449][Medium][tree]") {
    //TODO
    CHECK(true);
}

