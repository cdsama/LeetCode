#include "LeetCode.hpp"

/*
1104. Path In Zigzag Labelled Binary Tree
Medium

In an infinite binary tree where every node has two children, the nodes are labelled in row order.
In the odd numbered rows (ie., the first, third, fifth,...), the labelling is left to right, while in the even numbered rows (second, fourth, sixth,...), the labelling is right to left.

Given the label of a node in this tree, return the labels in the path from the root of the tree to the node with that label.
 
Example 1:

Input: label = 14
Output: [1,3,4,14]

Example 2:

Input: label = 26
Output: [1,2,6,10,26]

 
Constraints:

1 <= label <= 10^6

Tags: 
    1. Math
    2. Tree

Hint 1:
Based on the label of the current node, find what the label must be for the parent of that node.

*/

class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        
    }
};

TEST_CASE("path-in-zigzag-labelled-binary-tree", "[1104][Medium][math][tree]") {
    //TODO
    CHECK(true);
}

