#include "LeetCode.hpp"

/*
1020. Number of Enclaves
Medium

Given a 2D array A, each cell is 0 (representing sea) or 1 (representing land)
A move consists of walking from one land square 4-directionally to another land square, or off the boundary of the grid.
Return the number of land squares in the grid for which we cannot walk off the boundary of the grid in any number of moves.
 
Example 1:

Input: [[0,0,0,0],[1,0,1,0],[0,1,1,0],[0,0,0,0]]
Output: 3
Explanation: 
There are three 1s that are enclosed by 0s, and one 1 that isn't enclosed because its on the boundary.
Example 2:

Input: [[0,1,1,0],[0,0,1,0],[0,0,1,0],[0,0,0,0]]
Output: 0
Explanation: 
All 1s are either on the boundary or can reach the boundary.

 
Note:

1 <= A.length <= 500
1 <= A[i].length <= 500
0 <= A[i][j] <= 1
All rows have the same size.

Tags: 
    1. Depth-first Search

Hint 1:
Can you model this problem as a graph problem?  Create n * m + 1 nodes where n * m nodes represents each cell of the map and one extra node to represent the exterior of the map.

Hint 2:
In the map add edges between neighbors on land cells. And add edges between the exterior and land nodes which are in the boundary.
Return as answer the number of nodes that are not reachable from the exterior node.

*/

class Solution {
public:
    int numEnclaves(vector<vector<int>>& A) {
        
    }
};

TEST_CASE("number-of-enclaves", "[1020][Medium][depth-first-search]") {
    //TODO
    CHECK(true);
}

