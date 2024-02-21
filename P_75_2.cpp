#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void swap(int *x,int *y){
        int t=*x;*x=*y;*y=t;
    }

    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==2){
                swap(&nums[mid],&nums[high]);
                high--;
            }
            else if(nums[mid]==0){
                swap(&nums[mid],&nums[low]);
                mid++;low++;
            }
            else mid++;

        }
    }
};