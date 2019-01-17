#include "LeetCode.hpp"

TEST_CASE(TEST_NAME, TEST_TAGS) {
    CHECK(ListCreate({}) == nullptr);
    CHECK(ListEquals(ListCreate({}), ListCreate({})));
    CHECK(ListEquals(ListCreate({1, 2, 3}), ListCreate({1, 2, 3})));
    CHECK_FALSE(ListEquals(ListCreate({1}), ListCreate({})));
    CHECK_FALSE(ListEquals(ListCreate({1, 2, 3}), ListCreate({1, 2, 3, 4})));
    ostringstream s;
    ListPrint(s, ListCreate({1, 2, 3}));
    CHECK(s.str() == "1 -> 2 -> 3 -> \n");
    s.str("");
    ListPrint(s, ListCreate({0}));
    CHECK(s.str() == "0 -> \n");
    s.str("");
    ListPrint(s, ListCreate({}));
    CHECK(s.str() == "\n");
    CHECK(TreeCreate({}) == nullptr);
    CHECK(TreeCreate({{}}) == nullptr);
    {
        auto root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(3);
        CHECK(TreeEquals(root, TreeCreate({1, 2, 3})));
    }
    {
        auto n1 = new TreeNode(1);
        auto n2 = new TreeNode(2);
        n1->left = n2;
        auto n3 = new TreeNode(3);
        n1->right = n3;
        auto n4 = new TreeNode(4);
        n2->left = n4;
        auto n5 = new TreeNode(5);
        n3->left = n5;
        auto n6 = new TreeNode(6);
        n3->right = n6;
        auto n7 = new TreeNode(7);
        n4->left = n7;
        auto n8 = new TreeNode(8);
        n4->right = n8;
        auto n9 = new TreeNode(9);
        n5->right = n9;

        CHECK(TreeEquals(
            n1, TreeCreate({1, 2, 3, 4, {}, 5, 6, 7, 8, {}, {}, {}, 9})));
    }
}