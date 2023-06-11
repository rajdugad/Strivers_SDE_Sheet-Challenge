#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	pair<int,int> ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size()-1;i++){
		if(arr[i]==arr[i+1]){
			ans.second=arr[i];
		}
	}
	int os=(n*(n+1))/2;
	int s=accumulate(arr.begin(),arr.end(),0);
	ans.first=os-s+ans.second;
	return ans;
	
	
}
