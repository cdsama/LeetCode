#include "LeetCode.hpp"

/*
149. Max Points on a Line
Hard

Given n points on a 2D plane, find the maximum number of points that lie on the same straight line.
Example 1:

Input: [[1,1],[2,2],[3,3]]
Output: 3
Explanation:
^
|
|        o
|     o
|  o  
+------------->
0  1  2  3  4

Example 2:

Input: [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]
Output: 4
Explanation:
^
|
|  o
|     o        o
|        o
|  o        o
+------------------->
0  1  2  3  4  5  6

Tags: 
    1. Hash Table
    2. Math

Similar Questions:
    1. Line Reflection

*/

/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int maxPoints(vector<Point>& points) {
        
    }
};

TEST_CASE("max-points-on-a-line", "[149][Hard][hash-table][math]") {
    //TODO
    CHECK(true);
}

