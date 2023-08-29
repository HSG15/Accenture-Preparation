#include<bits/stdc++.h>
using namespace std;

int dist_dupl(int a, int b, int c, int d){
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	
	unordered_map<int, int> mp;
	for(int i=0; i<v.size(); i++){
		mp[v[i]]++;
	}
	
	int distSum = 0;
	for(auto it : mp){
		if(it.second < 2) distSum += it.first;
	}

	int duplSum = 0;
	for(auto it : mp){
		if(it.second > 1) duplSum += it.first;
	}
	
	return distSum - duplSum;
}

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int diff = dist_dupl(a, b, c, d);
	cout << diff;
}