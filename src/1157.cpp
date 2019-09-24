#include "LeetCode.hpp"

/*
1157. Online Majority Element In Subarray
Hard

Implementing the class MajorityChecker, which has the following API:

MajorityChecker(int[] arr) constructs an instance of MajorityChecker with the given array arr;
int query(int left, int right, int threshold) has arguments such that:
	
0 <= left <= right < arr.length representing a subarray of arr;
2 * threshold > right - left + 1, ie. the threshold is always a strict majority of the length of the subarray

Each query(...) returns the element in arr[left], arr[left+1], ..., arr[right] that occurs at least threshold times, or -1 if no such element exists.
 
Example:

MajorityChecker majorityChecker = new MajorityChecker([1,1,2,2,1,1]);
majorityChecker.query(0,5,4); // returns 1
majorityChecker.query(0,3,3); // returns -1
majorityChecker.query(2,3,2); // returns 2

 
Constraints:

1 <= arr.length <= 20000
1 <= arr[i] <= 20000
For each query, 0 <= left <= right < len(arr)
For each query, 2 * threshold > right - left + 1
The number of queries is at most 10000

Tags: 
    1. Array
    2. Binary Search
    3. Segment Tree

Hint 1:
What's special about a majority element ?

Hint 2:
A majority element appears more than half the length of the array number of times.

Hint 3:
If we tried a random index of the array, what's the probability that this index has a majority element ?

Hint 4:
It's more than 50% if that array has a majority element.

Hint 5:
Try a random index for a proper number of times so that the probability of not finding the answer tends to zero.

*/

class MajorityChecker {
public:
    MajorityChecker(vector<int>& arr) {
        
    }
    
    int query(int left, int right, int threshold) {
        
    }
};

/**
 * Your MajorityChecker object will be instantiated and called as such:
 * MajorityChecker* obj = new MajorityChecker(arr);
 * int param_1 = obj->query(left,right,threshold);
 */

TEST_CASE("online-majority-element-in-subarray", "[1157][Hard][array][binary-search][segment-tree]") {
    //TODO
    CHECK(true);
}

