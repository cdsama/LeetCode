#include "LeetCode.hpp"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution
{
  public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        if (!l1 || (l1 && !l1->next && l1->val == 0))
        {
            return l2;
        }

        if (!l2 || (l2 && !l2->next && l2->val == 0))
        {
            return l1;
        }

        ListNode head(0);
        ListNode *digi = &head;
        int evol = 0, sum = 0;
        while (evol || l1 || l2)
        {
            sum = evol;

            if (evol == 0 && (l1 == nullptr || l2 == nullptr))
            {
                digi->next = l1 == nullptr ? l2 : l1;
                return head.next;
            }

            if (l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            if (sum > 9)
            {
                evol = sum / 10;
                sum = sum - 10;
            }
            else
            {
                evol = 0;
            }

            digi->next = new ListNode(sum);
            digi = digi->next;
        }

        return head.next;
    }
};

TEST_CASE("Add Two Numbers", "add-two-numbers")
{
    Solution s;
    CHECK(ListEquals(s.addTwoNumbers(ListCreate({}), ListCreate({})), ListCreate({})));
    CHECK(ListEquals(s.addTwoNumbers(ListCreate({}), ListCreate({1})), ListCreate({1})));
    CHECK(ListEquals(s.addTwoNumbers(ListCreate({2}), ListCreate({})), ListCreate({2})));
    CHECK(ListEquals(s.addTwoNumbers(ListCreate({1}), ListCreate({2})), ListCreate({3})));
    CHECK(ListEquals(s.addTwoNumbers(ListCreate({1, 1}), ListCreate({2, 2})), ListCreate({3, 3})));
    CHECK(ListEquals(s.addTwoNumbers(ListCreate({9, 1, 1}), ListCreate({2, 2, 2})), ListCreate({1, 4, 3})));
    CHECK(ListEquals(s.addTwoNumbers(ListCreate({4, 1, 3, 1}), ListCreate({0, 2, 5})), ListCreate({4, 3, 8, 1})));
    CHECK(ListEquals(s.addTwoNumbers(ListCreate({1}), ListCreate({9, 9, 9, 9, 9})), ListCreate({0, 0, 0, 0, 0, 1})));
    CHECK(ListEquals(s.addTwoNumbers(ListCreate({1}), ListCreate({9, 0, 0, 0, 0, 1})), ListCreate({0, 1, 0, 0, 0, 1})));
}