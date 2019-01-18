#include "LeetCode.hpp"

/*
138. Copy List with Random Pointer
Medium

A linked list is given such that each node contains an additional random pointer which could point to any node in the list or null.

Return a deep copy of the list.

Tags: 
    1. Hash Table
    2. Linked List

Similar Questions:
    1. Clone Graph

Hint 1:
Just iterate the linked list and create copies of the nodes on the go. Since a node can be referenced from multiple nodes due to the random pointers, make sure you are not making multiple copies of the same node.

Hint 2:
You may want to use extra space to keep old node ---> new node mapping to prevent creating multiples copies of same node.

Hint 3:
We can avoid using extra space for old node ---> new node mapping, by tweaking the original linked list. Simply interweave the nodes of the old and copied list. 
For e.g.

Old List: A --> B --> C --> D
InterWeaved List: A --> A' --> B --> B' --> C --> C' --> D --> D'

Hint 4:
The interweaving is done using next pointers and we can make use of interweaved structure to get the correct reference nodes for random pointers.

*/

/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        
    }
};

TEST_CASE("copy-list-with-random-pointer", "[138][Medium][hash-table][linked-list]") {
    //TODO
    CHECK(true);
}

