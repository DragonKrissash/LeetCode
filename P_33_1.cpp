#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bin_search(vector<int>& nums, int low, int high, int x) {
        int mid;
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] == x)
                return mid;
            else if (nums[mid] > x)
                high = mid;
            else
                low = mid;
        }
        return -1;
    } // binary search function to find

    int indexMaxRotatedSorted(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1, mid;
        int first = nums[0];
        while (low < high) {
            mid = (low + high) / 2;
            if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
                return mid;
            else if (nums[mid] > first)
                low = mid;
            else
                high = mid;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1, mid;
        int first = nums[0];
        int index_max = indexMaxRotatedSorted(nums);
        int ind = 0;
        if (target < first)
            ind = bin_search(nums, index_max + 1, n - 1, target);
        else
            ind = bin_search(nums, 0, index_max, target);
        return ind;
    }
};
