#include "LeetCode.hpp"

/*
278. First Bad Version
Easy

You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.
Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.
You are given an API bool isBadVersion(version) which will return whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.
Example:

Given n = 5, and version = 4 is the first bad version.

call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true

Then 4 is the first bad version. 

Tags: 
    1. Binary Search

Similar Questions:
    1. Find First and Last Position of Element in Sorted Array
    2. Search Insert Position
    3. Guess Number Higher or Lower

*/

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
    }
};

TEST_CASE("first-bad-version", "[278][Easy][binary-search]") {
    //TODO
    CHECK(true);
}

