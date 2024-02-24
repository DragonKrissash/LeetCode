#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<vector<int>> tran(n);
        for(int a=0;a<n;a++)
        for(int b=0;b<m;b++)
        tran[a].push_back(matrix[b][a]);
        return tran;
    }
// };