#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:
    int min(int a,int b){
        if (a<b)return a;
        else return b;
    }

    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>pmax(n);vector<int>nmax(n);
        int max=-1;
        for(int a=0;a<n;a++){
            if(max<height[a]){
                pmax[a]=max;
                max=height[a];
            }
            else pmax[a]=max;
        }
        max=-1;
        for(int a=n-1;a>=0;a--){
            if(max<height[a]){
                nmax[a]=max;
                max=height[a];
            }
            else nmax[a]=max;
        }   
        int ht=0;
        for(int a=0;a<n;a++){
            int minv=min(pmax[a],nmax[a]);
            if(minv>=height[a])
            ht+=minv-height[a];
        }
        return ht;
    }
// };
int main(){
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(v);
}