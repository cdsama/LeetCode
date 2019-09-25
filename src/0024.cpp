#include "LeetCode.hpp"

/*
24. Swap Nodes in Pairs
Medium

Given a linked list, swap every two adjacent nodes and return its head.
Example:

Given 1->2->3->4, you should return the list as 2->1->4->3.
Note:

Your algorithm should use only constant extra space.
You may not modify the values in the list's nodes, only nodes itself may be
changed.

Tags:
    1. Linked List

Similar Questions:
    1. Reverse Nodes in k-Group

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
   public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        ListNode* new_head = head->next;
        head->next = swapPairs(new_head->next);
        new_head->next = head;
        return new_head;
    }
};

class Solution2 {
   public:
    ListNode* swapPairs(ListNode* head) {
        ListNode** tmp = &head;
        ListNode* first;
        ListNode* second;

        while (((first = *tmp) != nullptr) &&
               ((second = first->next) != nullptr)) {
            first->next = second->next;
            second->next = first;
            *tmp = second;
            tmp = &first->next;
        }
        return head;
    }
};

TEST_CASE("swap-nodes-in-pairs", "[24][Medium][linked-list]") {
    {
        Solution s;
        CHECK(ListEquals(s.swapPairs(LIST(1, 2, 3, 4)), LIST(2, 1, 4, 3)));
        CHECK(ListEquals(s.swapPairs(LIST(1, 2, 3)), LIST(2, 1, 3)));
    }
    {
        Solution2 s;
        CHECK(ListEquals(s.swapPairs(LIST(1, 2, 3, 4)), LIST(2, 1, 4, 3)));
        CHECK(ListEquals(s.swapPairs(LIST(1, 2, 3)), LIST(2, 1, 3)));
    }
}
