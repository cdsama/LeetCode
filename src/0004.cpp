#include "LeetCode.hpp"

/*
4. Median of Two Sorted Arrays
Hard

There are two sorted arrays nums1 and nums2 of size m and n respectively.
Find the median of the two sorted arrays. The overall run time complexity should
be O(log (m+n)). You may assume nums1 and nums2 cannot be both empty.

Example 1:
    nums1 = [1, 3]
    nums2 = [2]

    The median is 2.0

Example 2:
    nums1 = [1, 2]
    nums2 = [3, 4]

    The median is (2 + 3)/2 = 2.5

*/

class Solution {
   public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        auto l1 = static_cast<int>(nums1.size());
        auto l2 = static_cast<int>(nums2.size());
        if (l1 > l2) {
            return findMedianSortedArrays(nums2, nums1);
        }
        int iMin = 0, iMax = l1;

        while (iMin <= iMax) {
            int i = (iMin + iMax) / 2;
            int j = (l1 + l2 + 1) / 2 - i;
            if (i != l1 && j != 0 && nums1[i] < nums2[j - 1]) {
                iMin = i + 1;
            } else if (i != 0 && j != l2 && nums1[i - 1] > nums2[j]) {
                iMax = i - 1;
            } else {
                int left = 0;

                if (i == 0) {
                    left = nums2[j - 1];
                } else if (j == 0) {
                    left = nums1[i - 1];
                } else {
                    left = max(nums1[i - 1], nums2[j - 1]);
                }
                if ((l1 + l2) % 2 != 0) {
                    return left;
                }

                int right = 0;

                if (i == l1) {
                    right = nums2[j];
                } else if (j == l2) {
                    right = nums1[i];
                } else {
                    right = min(nums1[i], nums2[j]);
                }
                return (left + right) / 2.0;
            }
        }

        return 0;
    }
};

TEST_CASE(TEST_NAME, TEST_TAGS) {
    Solution s;
    vector<int> a, b;
    a = {1, 3};
    b = {2};
    CHECK(s.findMedianSortedArrays(a, b) == Approx(2.0));
    a = {1, 2};
    b = {3, 4};
    CHECK(s.findMedianSortedArrays(a, b) == Approx(2.5));
    a = {1, 3, 5, 7};
    b = {2, 4, 8, 9};
    CHECK(s.findMedianSortedArrays(a, b) == Approx(4.5));
    a = {1, 2, 3, 7, 8, 13, 22, 35};
    b = {2, 4, 9, 16, 25, 26};
    CHECK(s.findMedianSortedArrays(a, b) == Approx(8.5));
    a = {1};
    b = {2, 3, 4, 5};
    CHECK(s.findMedianSortedArrays(a, b) == Approx(3.0));
    a = {2, 3, 4};
    b = {1};
    CHECK(s.findMedianSortedArrays(a, b) == Approx(2.5));
}
