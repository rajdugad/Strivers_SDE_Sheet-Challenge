int removeDuplicates(vector<int> &arr, int n) {
	int c=0;
	for(int i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			c++;
		}
	}
	return n-c;
}