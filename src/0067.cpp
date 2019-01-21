#include "LeetCode.hpp"

/*
67. Add Binary
Easy

Given two binary strings, return their sum (also a binary string).
The input strings are both non-empty and contains only characters 1 or 0.

Example 1:
    Input: a = "11", b = "1"
    Output: "100"

Example 2:
    Input: a = "1010", b = "1011"
    Output: "10101"

Tags:
    1. Math
    2. String

Similar Questions:
    1. Add Two Numbers
    2. Multiply Strings
    3. Plus One

*/

class Solution {
   public:
    string addBinary(string a, string b) {
        size_t sizea = a.size();
        size_t sizeb = b.size();
        string* long_str = &a;
        string* short_str = &b;
        if (sizea < sizeb) {
            swap(sizea, sizeb);
            swap(long_str, short_str);
        }
        bool carry = false;
        for (size_t i = 0; i < sizea; ++i) {
            char& l = (*long_str)[sizea - i - 1];
            if (i < sizeb) {
                switch ((*short_str)[sizeb - i - 1] + l) {
                    case '0' + '0': {
                        if (carry) {
                            l = '1';
                            carry = false;
                        }
                    } break;
                    case '0' + '1': {
                        if (carry) {
                            l = '0';
                        } else {
                            l = '1';
                        }
                    } break;
                    default: {
                        if (!carry) {
                            l = '0';
                            carry = true;
                        }
                    } break;
                }
            } else {
                if (l == '0') {
                    if (carry) {
                        l = '1';
                        carry = false;
                    }
                } else {
                    if (carry) {
                        l = '0';
                    }
                }
            }
        }
        if (carry) {
            long_str->insert(long_str->begin(), '1');
        }
        return *long_str;
    }
};

TEST_CASE("add-binary", "[67][Easy][math][string]") {
    Solution s;
    CHECK(s.addBinary("11", "1") == "100");
    CHECK(s.addBinary("1010", "1011") == "10101");
}
