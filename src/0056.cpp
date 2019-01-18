#include "LeetCode.hpp"

/*
56. Merge Intervals
Medium

Given a collection of intervals, merge all overlapping intervals.
Example 1:

Input: [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].

Example 2:

Input: [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.

Tags: 
    1. Array
    2. Sort

Similar Questions:
    1. Insert Interval
    2. Meeting Rooms
    3. Meeting Rooms II
    4. Teemo Attacking
    5. Add Bold Tag in String
    6. Range Module
    7. Employee Free Time
    8. Partition Labels

*/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        
    }
};

TEST_CASE("merge-intervals", "[56][Medium][array][sort]") {
    //TODO
    CHECK(true);
}

