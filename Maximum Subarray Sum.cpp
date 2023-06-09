#include <bits/stdc++.h>

long long maxSubarraySum(int arr[], int n){
    long long s = 0;
    long long big = 0;
    for(int i = 0;i < n;i++){
        if (s<0){
            s = 0;
        }
        s = s + arr[i];
        big = max(s,big);
    }
    return big;
}

