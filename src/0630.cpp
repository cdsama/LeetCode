#include "LeetCode.hpp"

/*
630. Course Schedule III
Hard

There are n different online courses numbered from 1 to n. Each course has some duration(course length)  t and closed on dth day. A course should be taken continuously for t days and must be finished before or on the dth day. You will start at the 1st day.

Given n online courses represented by pairs (t,d), your task is to find the maximal number of courses that can be taken.

Example:

Input: [[100, 200], [200, 1300], [1000, 1250], [2000, 3200]]
Output: 3
Explanation: 
There're totally 4 courses, but you can take 3 courses at most:
First, take the 1st course, it costs 100 days so you will finish it on the 100th day, and ready to take the next course on the 101st day.
Second, take the 3rd course, it costs 1000 days so you will finish it on the 1100th day, and ready to take the next course on the 1101st day. 
Third, take the 2nd course, it costs 200 days so you will finish it on the 1300th day. 
The 4th course cannot be taken now, since you will finish it on the 3300th day, which exceeds the closed date.

Note:

The integer 1 <= d, t, n <= 10,000. 
You can't take two courses simultaneously.

Tags: 
    1. Greedy

Similar Questions:
    1. Course Schedule
    2. Course Schedule II

Hint 1:
During iteration, say I want to add the current course, currentTotalTime being total time of all courses taken till now, but adding the current course might exceed my deadline or it doesn’t.

1. If it doesn’t, then I have added one new course. Increment the currentTotalTime with duration of current course.

Hint 2:
2. If it exceeds deadline, I can swap current course with current courses that has biggest duration.
* No harm done and I might have just reduced the currentTotalTime, right? 
* What preprocessing do I need to do on my course processing order so that this swap is always legal?

*/

class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        
    }
};

TEST_CASE("course-schedule-iii", "[630][Hard][greedy]") {
    //TODO
    CHECK(true);
}

