#include "LeetCode.hpp"

/*
715. Range Module
Hard

A Range Module is a module that tracks ranges of numbers. Your task is to design and implement the following interfaces in an efficient manner.
addRange(int left, int right) Adds the half-open interval [left, right), tracking every real number in that interval.  Adding an interval that partially overlaps with currently tracked numbers should add any numbers in the interval [left, right) that are not already tracked.
queryRange(int left, int right) Returns true if and only if every real number in the interval [left, right)
 is currently being tracked.
removeRange(int left, int right) Stops tracking every real number currently being tracked in the interval [left, right).
Example 1:

addRange(10, 20): null
removeRange(14, 16): null
queryRange(10, 14): true (Every number in [10, 14) is being tracked)
queryRange(13, 15): false (Numbers like 14, 14.03, 14.17 in [13, 15) are not being tracked)
queryRange(16, 17): true (The number 16 in [16, 17) is still being tracked, despite the remove operation)

Note:
A half open interval [left, right) denotes all real numbers left <= x < right.
0 < left < right < 10^9 in all calls to addRange, queryRange, removeRange.
The total number of calls to addRange in a single test case is at most 1000.
The total number of calls to queryRange in a single test case is at most 5000.
The total number of calls to removeRange in a single test case is at most 1000.

Tags: 
    1. Array
    2. Segment Tree
    3. Binary Search Tree

Similar Questions:
    1. Merge Intervals
    2. Insert Interval
    3. Data Stream as Disjoint Intervals

Hint 1:
Maintain a sorted set of disjoint intervals.  addRange and removeRange can be performed with time complexity linear to the size of this set; queryRange can be performed with time complexity logarithmic to the size of this set.

*/

class RangeModule {
public:
    RangeModule() {
        
    }
    
    void addRange(int left, int right) {
        
    }
    
    bool queryRange(int left, int right) {
        
    }
    
    void removeRange(int left, int right) {
        
    }
};

/**
 * Your RangeModule object will be instantiated and called as such:
 * RangeModule obj = new RangeModule();
 * obj.addRange(left,right);
 * bool param_2 = obj.queryRange(left,right);
 * obj.removeRange(left,right);
 */

TEST_CASE("range-module", "[715][Hard][array][segment-tree][binary-search-tree]") {
    //TODO
    CHECK(true);
}

