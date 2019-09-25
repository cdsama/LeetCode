#include "LeetCode.hpp"

/*
23. Merge k Sorted Lists
Hard

Merge k sorted linked lists and return it as one sorted list. Analyze and
describe its complexity. Example:

Input:
[
  1->4->5,
  1->3->4,
  2->6
]
Output: 1->1->2->3->4->4->5->6

Tags:
    1. Linked List
    2. Divide and Conquer
    3. Heap

Similar Questions:
    1. Merge Two Sorted Lists
    2. Ugly Number II

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

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

class Solution {
   public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* merged = nullptr;
        for (ListNode* list : lists) {
            merged = mergeTwoLists(merged, list);
        }
        return merged;
    }
};

class Solution2 {
   public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int len = static_cast<int>(lists.size());
        int interval = 1;
        if (len == 0) {
            return nullptr;
        }
        while (interval < len) {
            for (int i = 0; i < len - interval; i += interval * 2) {
                lists[i] = mergeTwoLists(lists[i], lists[i + interval]);
            }
            interval *= 2;
        }
        return lists[0];
    }

};

TEST_CASE("merge-k-sorted-lists",
          "[23][Hard][linked-list][divide-and-conquer][heap]") {
    {
        vector<ListNode*> lists = {LIST(1, 4, 5), LIST(1, 3, 4), LIST(2, 6)};
        Solution s;
        CHECK(ListEquals(s.mergeKLists(lists), LIST(1, 1, 2, 3, 4, 4, 5, 6)));
    }
    {
        vector<ListNode*> lists = {LIST(1, 4, 5), LIST(1, 3, 4), LIST(2, 6)};
        Solution2 s;
        CHECK(ListEquals(s.mergeKLists(lists), LIST(1, 1, 2, 3, 4, 4, 5, 6)));
    }
}
