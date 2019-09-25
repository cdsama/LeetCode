#include "LeetCode.hpp"

/*
21. Merge Two Sorted Lists
Easy

Merge two sorted linked lists and return it as a new list. The new list should
be made by splicing together the nodes of the first two lists.

Example:
    Input: 1->2->4, 1->3->4
    Output: 1->1->2->3->4->4

Tags:
    1. Linked List

Similar Questions:
    1. Merge k Sorted Lists
    2. Merge Sorted Array
    3. Sort List
    4. Shortest Word Distance II

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode head(0);
        ListNode* curr = &head;
        while (true) {
            if (l1 == nullptr) {
                curr->next = l2;
                break;
            } else if (l2 == nullptr) {
                curr->next = l1;
                break;
            } else {
                if (l1->val < l2->val) {
                    curr->next = l1;
                    l1 = l1->next;
                } else {
                    curr->next = l2;
                    l2 = l2->next;
                }
                curr = curr->next;
            }
        }
        return head.next;
    }
};

class Solution2 {
   public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) {
            return l2;
        }
        if (l2 == nullptr) {
            return l1;
        }

        if (l1->val <= l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};

class Solution3 {
   public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode head(0);
        ListNode* curr = &head;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        while (l1) {
            curr->next = l1;
            l1 = l1->next;
            curr = curr->next;
        }
        while (l2) {
            curr->next = l2;
            l2 = l2->next;
            curr = curr->next;
        }

        return head.next;
    }
};

TEST_CASE("merge-two-sorted-lists", "[21][Easy][linked-list]") {
    {
        Solution s;
        CHECK(ListEquals(s.mergeTwoLists(LIST(), LIST()), LIST()));
        CHECK(ListEquals(s.mergeTwoLists(LIST(1, 3, 5), LIST(2, 4, 6)),
                         LIST(1, 2, 3, 4, 5, 6)));
        CHECK(ListEquals(s.mergeTwoLists(LIST(1, 2, 4), LIST(1, 3, 4)),
                         LIST(1, 1, 2, 3, 4, 4)));
    }
    {
        Solution2 s;
        CHECK(ListEquals(s.mergeTwoLists(LIST(), LIST()), LIST()));
        CHECK(ListEquals(s.mergeTwoLists(LIST(1, 3, 5), LIST(2, 4, 6)),
                         LIST(1, 2, 3, 4, 5, 6)));
        CHECK(ListEquals(s.mergeTwoLists(LIST(1, 2, 4), LIST(1, 3, 4)),
                         LIST(1, 1, 2, 3, 4, 4)));
    }
    {
        Solution3 s;
        CHECK(ListEquals(s.mergeTwoLists(LIST(), LIST()), LIST()));
        CHECK(ListEquals(s.mergeTwoLists(LIST(1, 3, 5), LIST(2, 4, 6)),
                         LIST(1, 2, 3, 4, 5, 6)));
        CHECK(ListEquals(s.mergeTwoLists(LIST(1, 2, 4), LIST(1, 3, 4)),
                         LIST(1, 1, 2, 3, 4, 4)));
    }
}
