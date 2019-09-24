#include "LeetCode.hpp"

/*
19. Remove Nth Node From End of List
Medium

Given a linked list, remove the n-th node from the end of list and return its
head. Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.

Note:
Given n will always be valid.
Follow up:
Could you do this in one pass?

Tags:
    1. Linked List
    2. Two Pointers

Hint 1:
Maintain two pointers and update one with a delay of n steps.

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> list;
        ListNode* node = head;
        while (node != nullptr) {
            list.push_back(node);
            node = node->next;
        }
        auto size = list.size();
        if (n == size) {
            return head->next;
        } else {
            node = list[size - n - 1];
            node->next = node->next->next;
            return head;
        }
    }
};

class Solution2 {
   public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev = new ListNode(0);
        prev->next = head;
        ListNode* first = prev;
        ListNode* second = prev;

        for (int i = 0; i < n + 1; i++) {
            second = second->next;
        }
        while (second != nullptr) {
            first = first->next;
            second = second->next;
        }
        first->next = first->next->next;
        return prev->next;
    }
};

TEST_CASE("remove-nth-node-from-end-of-list",
          "[19][Medium][linked-list][two-pointers]") {
    Solution s;
    CHECK(ListEquals(s.removeNthFromEnd(LIST(1, 2, 3, 4, 5), 2),
                     LIST(1, 2, 3, 5)));
    CHECK(ListEquals(s.removeNthFromEnd(LIST(1, 2), 1), LIST(1)));

    Solution2 s2;
    CHECK(ListEquals(s2.removeNthFromEnd(LIST(1, 2, 3, 4, 5), 2),
                     LIST(1, 2, 3, 5)));
    CHECK(ListEquals(s2.removeNthFromEnd(LIST(1, 2), 1), LIST(1)));
}
