#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:

    int l_bound(vector<int>& nums, int target){
        int ans=-1,n=nums.size(),low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target) {
                ans=mid;high=mid-1;
            }
            else{
                if(nums[mid]<target)
                low=mid+1;
                else
                high=mid-1;
            }
        }
        return ans;
    }

    int h_bound(vector<int>& nums, int target){
        int n=nums.size();
        int ans=-1,low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target) {
                ans=mid;low=mid+1;
            }
            else{
                if(nums[mid]<target)
                low=mid+1;
                else
                high=mid-1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> answ;
        answ.push_back(l_bound(nums,target));
        answ.push_back(h_bound(nums,target));
        return answ;

    }
// };

int main(){
    cout<<"Enter the size of array: ";int n;cin>>n;
    vector<int> v;
    cout<<"Enter the elements: ";
    for(int a=0;a<n;a++)
    {int x;cin>>x;v.push_back(x);}
    cout<<"Enter the target: ";
    int t;cin>>t;
    cout<<"bound: ";
    searchRange(v,t);
}