#include "LeetCode.hpp"

/*
95. Unique Binary Search Trees II
Medium

Given an integer n, generate all structurally unique BST's (binary search trees) that store values 1 ... n.
Example:

Input: 3
Output:
[
  [1,null,3,2],
  [3,2,null,1],
  [3,1,null,null,2],
  [2,1,3],
  [1,null,2,null,3]
]
Explanation:
The above output corresponds to the 5 unique BST's shown below:

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3

Tags: 
    1. Dynamic Programming
    2. Tree

Similar Questions:
    1. Unique Binary Search Trees
    2. Different Ways to Add Parentheses

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
    vector<TreeNode*> generateTrees(int n) {
        
    }
};

TEST_CASE("unique-binary-search-trees-ii", "[95][Medium][dynamic-programming][tree]") {
    //TODO
    CHECK(true);
}

