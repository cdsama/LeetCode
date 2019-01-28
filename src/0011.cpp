#include "LeetCode.hpp"

/*
11. Container With Most Water
Medium

Given n non-negative integers a1, a2, ..., an , where each represents a point at
coordinate (i, ai). n vertical lines are drawn such that the two endpoints of
line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis
forms a container, such that the container contains the most water. Note: You
may not slant the container and n is at least 2.

The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this
case, the max area of water (blue section) the container can contain is 49.

Example:
    Input: [1,8,6,2,5,4,8,3,7]
    Output: 49

Tags:
    1. Array
    2. Two Pointers

Similar Questions:
    1. Trapping Rain Water

*/

class Solution {
   public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int size = static_cast<int>(height.size());
        for (int i = 0; i < size - 1; ++i) {
            for (int j = i + 1; j < size; ++j) {
                area = max(min(height[i], height[j]) * (j - i), area);
            }
        }
        return area;
    }
};
class Solution2 {
   public:
    int maxArea(vector<int>& height) {
        int len = static_cast<int>(height.size());
        if (len < 2) {
            return 0;
        }
        int i = 0;
        int j = len - 1;
        int res = min(height[i], height[j]) * (j - i);
        while (i < j) {
            res = max(min(height[i], height[j]) * (j - i), res);
            if (height[i] < height[j]) {
                ++i;
            } else {
                --j;
            }
        }
        return res;
    }
};
TEST_CASE("container-with-most-water", "[11][Medium][array][two-pointers]") {
    {
        Solution s;
        vector<int> test = {1, 8, 6, 2, 5, 4, 8, 3, 7};
        CHECK(s.maxArea(test) == 49);
    }
    {
        Solution2 s;
        vector<int> test = {1, 8, 6, 2, 5, 4, 8, 3, 7};
        CHECK(s.maxArea(test) == 49);
    }
}
