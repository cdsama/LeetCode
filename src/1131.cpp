#include "LeetCode.hpp"

/*
1131. Maximum of Absolute Value Expression
Medium

Given two arrays of integers with equal lengths, return the maximum value of:
|arr1[i] - arr1[j]| + |arr2[i] - arr2[j]| + |i - j|
where the maximum is taken over all 0 <= i, j < arr1.length.
 
Example 1:

Input: arr1 = [1,2,3,4], arr2 = [-1,4,5,6]
Output: 13

Example 2:

Input: arr1 = [1,-2,-5,0,10], arr2 = [0,-2,-1,-7,-4]
Output: 20

 
Constraints:

2 <= arr1.length == arr2.length <= 40000
-10^6 <= arr1[i], arr2[i] <= 10^6

Tags: 
    1. Math
    2. Bit Manipulation

Hint 1:
Use the idea that abs(A) + abs(B) = max(A+B, A-B, -A+B, -A-B).

*/

class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        
    }
};

TEST_CASE("maximum-of-absolute-value-expression", "[1131][Medium][math][bit-manipulation]") {
    //TODO
    CHECK(true);
}

