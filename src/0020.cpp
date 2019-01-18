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

Tags:
    1. String
    2. Stack

Similar Questions:
    1. Generate Parentheses
    2. Longest Valid Parentheses
    3. Remove Invalid Parentheses

Hint 1:
An interesting property about a valid parenthesis expression is that a
sub-expression of a valid expression should also be a valid expression. (Not
every sub-expression) e.g.

{ { } [ ] [ [ [ ] ] ] } is VALID expression
          [ [ [ ] ] ]    is VALID sub-expression
  { } [ ]                is VALID sub-expression

Can we exploit this recursive structure somehow?

Hint 2:
What if whenever we encounter a matching pair of parenthesis in the expression,
we simply remove it from the expression? This would keep on shortening the
expression. e.g.

{ { ( { } ) } }
      |_|

{ { (      ) } }
    |______|

{ {          } }
  |__________|

{                }
|________________|

VALID EXPRESSION!

Hint 3:
The stack data structure can come in handy here in representing this recursive
structure of the problem. We can't really process this from the inside out
because we don't have an idea about the overall structure. But, the stack can
help us process this recursively i.e. from outside to inwards.

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

TEST_CASE("valid-parentheses", "[20][Easy][string][stack]") {
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
