#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    long long c;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) c++;
        }
    }
    return c;
}