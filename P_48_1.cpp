#include <bits/stdc++.h>
using namespace std;

void tran(vector<vector<int>>& matrix){
    int n=matrix.size();
    for(int a=0;a<n;a++)
    for(int b=a+1;b<n;b++){
        swap(matrix[a][b],matrix[b][a]);
    }
}

void rev(vector<vector<int>>& matrix){
    int n=matrix.size();
    for(int a=0;a<n;a++)
    reverse(matrix[a].begin(),matrix[a].end());
}

void rotate(vector<vector<int>>& matrix) {
        tran(matrix);
        rev(matrix);
    }