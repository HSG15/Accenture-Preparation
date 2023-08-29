// Let j and k be two indices in an array A.
// If j < K and A[j] > A[k], then the pair (j,k) is known as an “Inversion pair”.
// Example:
// Input:
// A: 1 20 6 4 5
// n: 5 (size of the array)
// Output:
// 5
// Explanation:
// The inversion pair in array A are (20,6),(20,4),(20,5),(6,4) and (6,5), 
// the count of the inversions are 5, hence 5 is returned.
#include<bits/stdc++.h>
using namespace std;

int findInversion(int *arr, int n){
	if(n==0) return -1;
	int count = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i] > arr[j]){
				count ++;
			}
		}
	}
	return count;
}

int main(){
	int arr[] = {13, 10, 9, 6, 21, 15, 14};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << findInversion(arr, n);
}