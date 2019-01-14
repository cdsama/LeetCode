#include "LeetCode.hpp"

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

TEST_CASE("Valid Parentheses", "valid-parentheses") {
    Solution s;
    CHECK(ListEquals(s.mergeTwoLists(ListCreate({}), ListCreate({})),
                     ListCreate({})));
    CHECK(ListEquals(
        s.mergeTwoLists(ListCreate({1, 3, 5}), ListCreate({2, 4, 6})),
        ListCreate({1, 2, 3, 4, 5, 6})));
    CHECK(ListEquals(
        s.mergeTwoLists(ListCreate({1, 2, 4}), ListCreate({1, 3, 4})),
        ListCreate({1, 1, 2, 3, 4, 4})));
}