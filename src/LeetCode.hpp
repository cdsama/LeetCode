#define CATCH_CONFIG_MAIN
#include <algorithm>
#include <catch2/catch.hpp>
#include <climits>
#include <deque>
#include <iostream>
#include <map>
#include <optional>
#include <stack>
#include <unordered_map>
#include <vector>

using namespace std;

static const auto _____ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *ListCreate(initializer_list<int> &&lst) {
    auto iter = lst.begin();
    ListNode *head = lst.size() ? new ListNode(*iter++) : nullptr;
    for (ListNode *cur = head; iter != lst.end(); cur = cur->next) {
        cur->next = new ListNode(*iter++);
    }
    return head;
}

#define LIST(...) ListCreate({__VA_ARGS__})

void ListPrint(ostream &os, ListNode *head) {
    ListNode *node = head;
    while (node) {
        os << node->val << " -> ";
        node = node->next;
    }
    os << endl;
}

bool ListEquals(ListNode *l, ListNode *r) {
    for (ListNode *curl = l, *curr = r;; curl = curl->next, curr = curr->next) {
        if (curl == nullptr || curr == nullptr) {
            return curl == nullptr && curr == nullptr;
        } else if (curl->val != curr->val) {
            return false;
        }
    }
}

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode *TreeCreate(initializer_list<optional<int>> &&lst) {
    auto root = lst.begin();
    if (root == lst.end() || !root->has_value()) {
        return nullptr;
    }
    vector<TreeNode *> vec;
    vec.reserve(lst.size());
    for (auto itr = root; itr != lst.end(); ++itr) {
        vec.push_back(itr->has_value() ? new TreeNode(itr->value()) : nullptr);
    }
    size_t level = 0;
    size_t level_begin = 0;
    size_t level_end = 0;
    size_t size = vec.size();
    for (size_t i = 0; i < size; ++i) {
        auto current_node = vec[i];
        if (current_node != nullptr) {
            auto child_index = level_end + (i - level_begin) * 2 + 1;
            if (child_index < size) {
                current_node->left = vec[child_index];
                if ((++child_index) < size) {
                    current_node->right = vec[child_index];
                }
            }
        } else {
            auto child_index = level_end + (i - level_begin) * 2 + 1;
            if (child_index < size) {
                auto child = vec[child_index];
                if (child != nullptr) {
                    cout << "initializer_list[" << child_index
                         << "]=" << child->val << ", should be {}" << endl;
                }
                if ((++child_index) < size) {
                    child = vec[child_index];
                    if (child != nullptr) {
                        cout << "initializer_list[" << child_index
                             << "]=" << child->val << ", should be {}" << endl;
                    }
                }
            }
        }
        if (i == level_end) {
            ++level;
            level_begin = level_end + 1;
            level_end += (size_t)1 << level;
        }
    }
    return vec[0];
}

#define TREE(...) TreeCreate({__VA_ARGS__})

bool TreeEquals(TreeNode *p, TreeNode *q) {
    if (p == nullptr && q == nullptr) {
        return true;
    } else if (p == nullptr || q == nullptr) {
        return false;
    }
    return (p->val == q->val) &&
           (TreeEquals(p->left, q->left) && TreeEquals(p->right, q->right));
}