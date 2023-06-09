#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
  int ans=0,sum=0;
  int n=arr.size();
  unordered_map<int,int>m;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum==0){
      ans=i+1;
    }
    else{
      if(m.find(sum)!=m.end()){
        ans=max(ans,i-m[sum]);
      }
      else{
        m[sum]=i;
      }
    }
  }
  return ans;
}