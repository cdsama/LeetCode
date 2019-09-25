#include "LeetCode.hpp"

/*
2. Add Two Numbers
Medium

You are given two non-empty linked lists representing two non-negative integers.
The digits are stored in reverse order and each of their nodes contain a single
digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the
number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.

Tags:
    1. Linked List
    2. Math

Similar Questions:
    1. Multiply Strings
    2. Add Binary
    3. Sum of Two Integers
    4. Add Strings
    5. Add Two Numbers II

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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        if (!l1 || (l1 && !l1->next && l1->val == 0)) {
            return l2;
        }

        if (!l2 || (l2 && !l2->next && l2->val == 0)) {
            return l1;
        }

        ListNode head(0);
        ListNode *digi = &head;
        int evol = 0, sum = 0;
        while (evol || l1 || l2) {
            sum = evol;

            if (evol == 0 && (l1 == nullptr || l2 == nullptr)) {
                digi->next = l1 == nullptr ? l2 : l1;
                return head.next;
            }

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            if (sum > 9) {
                evol = sum / 10;
                sum = sum - 10;
            } else {
                evol = 0;
            }

            digi->next = new ListNode(sum);
            digi = digi->next;
        }

        return head.next;
    }
};

class Solution2 {
   public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode head(0);
        ListNode *digi = &head;
        int sum = 0;
        while (l1 != nullptr || l2 != nullptr || sum != 0) {
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            digi->next = new ListNode(sum % 10);
            sum /= 10;
            digi = digi->next;
        }
        return head.next;
    }
};


class Solution3 {
   public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        if (!l1) {
            return l2;
        }
        if (!l2) {
            return l1;
        }
        int sum = l1->val + l2->val;
        ListNode *p = new ListNode(sum % 10);
        p->next = addTwoNumbers(l1->next, l2->next);
        if (sum > 9)
        {
            ListNode *evol = new ListNode(1);
            bool need_release = (p->next != nullptr);
            p->next = addTwoNumbers(p->next, evol);
            if (need_release) // will leak when  p->next is not null
            {
                delete evol;
            }
        }
        return p;
    }
};

TEST_CASE("add-two-numbers", "[2][Medium][linked-list][math]") {
    {
        Solution s;
        CHECK(ListEquals(s.addTwoNumbers(LIST(), LIST()), LIST()));
        CHECK(ListEquals(s.addTwoNumbers(LIST(), LIST(1)), LIST(1)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(2), LIST()), LIST(2)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(1), LIST(2)), LIST(3)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(1, 1), LIST(2, 2)), LIST(3, 3)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(9, 1, 1), LIST(2, 2, 2)),
                         LIST(1, 4, 3)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(4, 1, 3, 1), LIST(0, 2, 5)),
                         LIST(4, 3, 8, 1)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(1), LIST(9, 9, 9, 9, 9)),
                         LIST(0, 0, 0, 0, 0, 1)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(1), LIST(9, 0, 0, 0, 0, 1)),
                         LIST(0, 1, 0, 0, 0, 1)));
    }
    {
        Solution2 s;
        CHECK(ListEquals(s.addTwoNumbers(LIST(), LIST()), LIST()));
        CHECK(ListEquals(s.addTwoNumbers(LIST(), LIST(1)), LIST(1)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(2), LIST()), LIST(2)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(1), LIST(2)), LIST(3)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(1, 1), LIST(2, 2)), LIST(3, 3)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(9, 1, 1), LIST(2, 2, 2)),
                         LIST(1, 4, 3)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(4, 1, 3, 1), LIST(0, 2, 5)),
                         LIST(4, 3, 8, 1)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(1), LIST(9, 9, 9, 9, 9)),
                         LIST(0, 0, 0, 0, 0, 1)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(1), LIST(9, 0, 0, 0, 0, 1)),
                         LIST(0, 1, 0, 0, 0, 1)));
    }
    {
        Solution3 s;
        CHECK(ListEquals(s.addTwoNumbers(LIST(), LIST()), LIST()));
        CHECK(ListEquals(s.addTwoNumbers(LIST(), LIST(1)), LIST(1)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(2), LIST()), LIST(2)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(1), LIST(2)), LIST(3)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(1, 1), LIST(2, 2)), LIST(3, 3)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(9, 1, 1), LIST(2, 2, 2)),
                         LIST(1, 4, 3)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(4, 1, 3, 1), LIST(0, 2, 5)),
                         LIST(4, 3, 8, 1)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(1), LIST(9, 9, 9, 9, 9)),
                         LIST(0, 0, 0, 0, 0, 1)));
        CHECK(ListEquals(s.addTwoNumbers(LIST(1), LIST(9, 0, 0, 0, 0, 1)),
                         LIST(0, 1, 0, 0, 0, 1)));
    }
}
