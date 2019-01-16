#include "LeetCode.hpp"

/*
20. Valid Parentheses
Easy

Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:
    Input: "()"
    Output: true

Example 2:
    Input: "()[]{}"
    Output: true

Example 3:
    Input: "(]"
    Output: false

Example 4:
    Input: "([)]"
    Output: false

Example 5:
    Input: "{[]}"
    Output: true

*/

class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        for (const auto c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty()) {
                    return false;
                }
                const auto last = st.top();
                switch (c) {
                    case ')': {
                        if (last == '(') {
                            st.pop();
                        } else {
                            return false;
                        }
                    } break;
                    case ']': {
                        if (last == '[') {
                            st.pop();
                        } else {
                            return false;
                        }
                    } break;
                    case '}': {
                        if (last == '{') {
                            st.pop();
                        } else {
                            return false;
                        }
                    } break;

                    default:
                        return false;
                }
            }
        }

        return st.empty();
    }
};

TEST_CASE(TEST_NAME, TEST_TAGS) {
    Solution s;
    using tests = vector<pair<string, bool>>;
    tests strs = {{"()", true},    {"()[]{}", true}, {"(]", false},
                  {"([)]", false}, {"([)", false},   {"{[]}", true},
                  {"", true},      {"((", false}};

    for (auto &p : strs) {
        INFO(p.first << " " << boolalpha << p.second);
        CHECK(s.isValid(p.first) == p.second);
    }
}