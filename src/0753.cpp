#include "LeetCode.hpp"

/*
753. Cracking the Safe
Hard

There is a box protected by a password.  The password is n digits, where each letter can be one of the first k digits 0, 1, ..., k-1.

You can keep inputting the password, the password will automatically be matched against the last n digits entered.

For example, assuming the password is "345", I can open it when I type "012345", but I enter a total of 6 digits.

Please return any string of minimum length that is guaranteed to open the box after the entire string is inputted.

Example 1:

Input: n = 1, k = 2
Output: "01"
Note: "10" will be accepted too.

Example 2:

Input: n = 2, k = 2
Output: "00110"
Note: "01100", "10011", "11001" will be accepted too.

Note:

n will be in the range [1, 4].
k will be in the range [1, 10].
k^n will be at most 4096.

Tags: 
    1. Math
    2. Depth-first Search

Hint 1:
We can think of this problem as the problem of finding an Euler path (a path visiting every edge exactly once) on the following graph: there are $$k^{n-1}$$ nodes with each node having $$k$$ edges.  It turns out this graph always has an Eulerian circuit (path starting where it ends.)

We should visit each node in "post-order" so as to not get stuck in the graph prematurely.

*/

class Solution {
public:
    string crackSafe(int n, int k) {
        
    }
};

TEST_CASE("cracking-the-safe", "[753][Hard][math][depth-first-search]") {
    //TODO
    CHECK(true);
}

