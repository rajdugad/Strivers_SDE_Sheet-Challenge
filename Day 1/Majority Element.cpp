#include <bits/stdc++.h>


int findMajorityElement(int arr[], int n) {
	map<int,int>m;
	int me=0;
	int mc=0;
	for(int i=0;i<n;i++){
		int num=arr[i];
		m[num]++;
		if(m[num]>mc){
			me=num;
			mc=m[num];
		}
	}
	if(mc>n/2){
		return me;
	}
	else{
		return -1;
	}
}