/* Write a program to print the sum of all the LEADERS in the array.
An element is leader if it is greater than all the elements to its right side.
Note: The rightmost element is always a leader.
For example
Input
6
[16, 17, 4, 3, 5, 2]
Output
24 */

#include<bits/stdc++.h>
using namespace std;

int leaders(vector<int> arr, int siz){
	int sum = 0;
	bool flag = false;
	for(int i=0; i<siz-1; i++)
	{
		for(int j=i+1; j<siz; j++)
		{
			if(arr[i]<arr[j]){
				flag = false;
				break;
			} 
			else{
				flag = true;
			}
			
		}
		if(flag) sum += arr[i];//17
	}
	return sum+arr[siz-1];
}

int main(){
	vector<int> v;
	int siz, num;
	cout << "Size : ";
	cin >> siz;
	cout << "Enter " << siz << " elements : ";
	for (int i = 0; i < siz; ++i)
	{
		cin >> num;
		v.push_back(num);
	}
	cout << endl << "Sum : " << leaders(v, siz);
}
