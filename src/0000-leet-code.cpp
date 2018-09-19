#include "LeetCode.hpp"


TEST_CASE("ListNode", "test")
{
    CHECK(ListCreate({}) == nullptr);
    CHECK(ListEquals(ListCreate({}), ListCreate({})));
    CHECK(ListEquals(ListCreate({1,2,3}), ListCreate({1,2,3})));
    CHECK_FALSE(ListEquals(ListCreate({1}), ListCreate({})));
    CHECK_FALSE(ListEquals(ListCreate({1,2,3}), ListCreate({1,2,3,4})));
    ostringstream s;
    ListPrint(s, ListCreate({1,2,3}));
    CHECK(s.str() == "1 -> 2 -> 3 -> \n");
    s.str("");
    ListPrint(s, ListCreate({0}));
    CHECK(s.str() == "0 -> \n");
    s.str("");
    ListPrint(s, ListCreate({}));
    CHECK(s.str() == "\n");
}