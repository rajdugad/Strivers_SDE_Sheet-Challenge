#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int i = m-1;
	int j = n-1;
	int k = (m+n)-1;

    while(i>=0){

        if(arr1[i]<arr2[j] && j>=0){
			arr1[k] = arr2[j];
			k--;
			j--;
		}
		else{
			arr1[k] = arr1[i];
			i--;
			k--;
		}
	}
	
	while(i>=0){
		arr1[k] = arr1[i];
		k--;
		i--;
	}
	
	while(j>=0){
		arr1[k] = arr2[j];
		k--;
		j--;
	}
	
	return arr1;
}