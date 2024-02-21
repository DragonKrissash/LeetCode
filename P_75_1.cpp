#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int noz=0,noo=0; int noto=0;
        for(int a=0;a<nums.size();a++){
            if(nums[a]==0)noz++;
            else if(nums[a]==1)noo++;
            else noto++;
        }
        for(int a=0;a<nums.size();a++)
        {
            if(a<noz)nums[a]=0;
            else if(a>=noz && a<(noz+noo))nums[a]=1;
            else nums[a]=2;
        }
    }
};