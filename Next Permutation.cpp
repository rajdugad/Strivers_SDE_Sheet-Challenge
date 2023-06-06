#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
        int m = permutation.size(), k, l;
    	for (k = m - 2; k >= 0; k--) {
            if (permutation[k] < permutation[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(permutation.begin(), permutation.end());
    	} else {
    	    for (l = m - 1; l > k; l--) {
                if (permutation[l] > permutation[k]) {
                    break;
                }
            } 
    	    swap(permutation[k], permutation[l]);
    	    reverse(permutation.begin() + k + 1, permutation.end());
        }
        return permutation;
}