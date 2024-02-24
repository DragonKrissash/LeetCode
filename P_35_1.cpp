#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:

     int searchInsert(vector<int>& nums, int target) {
        int ans=-1,n=nums.size(),low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(target<=nums[mid]) {
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }

    int main(){
        cout<<"Enter the number of elements: ";
        int n;cin>>n;
        vector<int>v;
        cout<<"Enter the elements:"<<endl;
        for(int a=0;a<n;a++)
        {int x;cin>>x;v.push_back(x);}
        cout<<"Enter the target: ";
        int target;cin>>target;
        searchInsert(v,target);
    }
// };