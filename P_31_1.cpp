#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        for(int a=n-2;a>=0;a--)
        {
            if(nums[a]<nums[a+1])
            {
                idx=a;
                break;
            }
        }
        if(idx==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        reverse(nums.begin()+idx+1,nums.end());
        int j=-1;
        for(int i=idx+1;i<n;i++)
        if(nums[i]>nums[idx])
        {
            j=i;
            break;   
        }
        swap(nums[idx],nums[j]);
    }
};