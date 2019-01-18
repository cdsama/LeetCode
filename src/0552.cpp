#include "LeetCode.hpp"

/*
552. Student Attendance Record II
Hard

Given a positive integer n, return the number of all possible attendance records with length n, which will be regarded as rewardable. The answer may be very large, return it after mod 109 + 7.
A student attendance record is a string that only contains the following three characters:

'A' : Absent. 
'L' : Late.
 'P' : Present. 

A record is regarded as rewardable if it doesn't contain more than one 'A' (absent) or more than two continuous 'L' (late).
Example 1:

Input: n = 2
Output: 8 
Explanation:
There are 8 records with length 2 will be regarded as rewardable:
"PP" , "AP", "PA", "LP", "PL", "AL", "LA", "LL"
Only "AA" won't be regarded as rewardable owing to more than one absent times. 

Note:
The value of n won't exceed 100,000.

Tags: 
    1. Dynamic Programming

Similar Questions:
    1. Student Attendance Record I

*/

class Solution {
public:
    int checkRecord(int n) {
        
    }
};

TEST_CASE("student-attendance-record-ii", "[552][Hard][dynamic-programming]") {
    //TODO
    CHECK(true);
}

