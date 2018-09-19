#pragma warning(disable : 4819)
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <vector>
#include <unordered_map>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

static const auto _____ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *ListCreate(initializer_list<int> lst)
{
    auto iter = lst.begin();
    ListNode *head = lst.size() ? new ListNode(*iter++) : nullptr;
    for (ListNode *cur = head; iter != lst.end(); cur = cur->next)
    {
        cur->next = new ListNode(*iter++);
    }
    return head;
}

void ListPrint(ostream &os, ListNode *head)
{
    ListNode *node = head;
    while (node)
    {
        os << node->val << " -> ";
        node = node->next;
    }
    os << endl;
}

bool ListEquals(ListNode *l, ListNode *r)
{
    for (ListNode *curl = l, *curr = r;; curl = curl->next, curr = curr->next)
    {
        if (curl == nullptr || curr == nullptr)
        {
            return curl == nullptr && curr == nullptr;
        }
        else if (curl->val != curr->val)
        {
            return false;
        }
    }
    return false;
}