#include "LeetCode.hpp"

/*
576. Out of Boundary Paths
Medium

There is an m by n grid with a ball. Given the start coordinate (i,j) of the ball, you can move the ball to adjacent cell or cross the grid boundary in four directions (up, down, left, right). However, you can at most move N times. Find out the number of paths to move the ball out of grid boundary. The answer may be very large, return it after mod 109 + 7.

Example 1:

Input: m = 2, n = 2, N = 2, i = 0, j = 0
Output: 6
Explanation:

Example 2:

Input: m = 1, n = 3, N = 3, i = 0, j = 1
Output: 12
Explanation:

Note:

Once you move the ball out of boundary, you cannot move it back.
The length and height of the grid is in range [1,50].
N is in range [0,50].

Tags: 
    1. Dynamic Programming
    2. Depth-first Search

Similar Questions:
    1. Knight Probability in Chessboard

Hint 1:
WIll traversing every path is fesaible? There are many possible paths for a small matrix. Try to optimize it.

Hint 2:
Can we use some space to store the number of paths and updating them after every move?

Hint 3:
One obvious thing: ball will go out of boundary only by crossing it. Also, there is only one possible way ball can go out of boundary from boundary cell except corner cells. From corner cell ball can go out in two different ways. Can you use this thing to solve the problem?

*/

class Solution {
public:
    int findPaths(int m, int n, int N, int i, int j) {
        
    }
};

TEST_CASE("out-of-boundary-paths", "[576][Medium][dynamic-programming][depth-first-search]") {
    //TODO
    CHECK(true);
}

