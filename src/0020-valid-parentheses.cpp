#include "LeetCode.hpp"

#include <stack>

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

TEST_CASE("Valid Parentheses", "valid-parentheses") {
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