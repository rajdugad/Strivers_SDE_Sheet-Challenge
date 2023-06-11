#include <bits/stdc++.h>

bool searchMatrix(vector<vector<int>>&a, int target) {
    int m=a.size();
    int n=a[0].size();
    int i=0;
    for(i=0;i<m;i++)
    {
        if(a[i][0]<=target && a[i][n-1]>=target)
        {
            break;
        }
    }
    for(int j=0;j<n;j++)
    {
        if(i==m)
        {
            return false;
        }
        if(a[i][j]==target)
        {
            return true;
        }
    }
    return false;
}