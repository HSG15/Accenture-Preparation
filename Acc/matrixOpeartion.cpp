#include<bits/stdc++.h>
using namespace std;

int main(){
	int siz, element;
	cout << "Enter the size of the array : ";
	cin >> siz;
	
	vector<int> v;
	for(int i=0; i<siz; i++){
		cout << "Enter the " << i <<"th element : ";
		cin >> element;
		v.push_back(element);
	}
	
	vector<int> even;
	vector<int> odd;
	
	for(int i=0; i<v.size(); i++){
	    if(i%2 == 0) even.push_back(v[i]);
	    else odd.push_back(v[i]);
	}
    
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());
	
	int sum;
	sum = even[even.size()-2] + odd[odd.size()-2];
	cout << "Sum of 2nd largest elemet of both arrays is " << sum;
	
}

// 3 4 1 7 9