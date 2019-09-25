#include "LeetCode.hpp"

/*
25. Reverse Nodes in k-Group
Hard

Given a linked list, reverse the nodes of a linked list k at a time and return
its modified list. k is a positive integer and is less than or equal to the
length of the linked list. If the number of nodes is not a multiple of k then
left-out nodes in the end should remain as it is.

Example:
Given this linked list: 1->2->3->4->5
For k = 2, you should return: 2->1->4->3->5
For k = 3, you should return: 3->2->1->4->5
Note:

Only constant extra memory is allowed.
You may not alter the values in the list's nodes, only nodes itself may be
changed.

Tags:
    1. Linked List

Similar Questions:
    1. Swap Nodes in Pairs

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || !head->next || k == 1) {
            return head;
        }
        ListNode dummy(0);
        dummy.next = head;
        auto begin = &dummy;
        for (int i = 0; head;) {
            if (((++i) % k) == 0) {
                begin = reverse(begin, head->next);
                head = begin->next;
            } else {
                head = head->next;
            }
        }
        return dummy.next;
    }

    ListNode* reverse(ListNode* begin, ListNode* end) {
        auto first = begin->next;
        auto curr = first;
        auto prev = begin;
        while (curr != end) {
            auto next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        begin->next = prev;
        first->next = curr;
        return first;
    }
};

TEST_CASE("reverse-nodes-in-k-group", "[25][Hard][linked-list]") {
    {
        Solution s;
        CHECK(ListEquals(s.reverseKGroup(LIST(1, 2, 3, 4, 5), 2),
                         LIST(2, 1, 4, 3, 5)));
        CHECK(ListEquals(s.reverseKGroup(LIST(1, 2, 3, 4, 5), 3),
                         LIST(3, 2, 1, 4, 5)));
    }
}
