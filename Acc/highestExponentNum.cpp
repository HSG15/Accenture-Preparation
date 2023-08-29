#include <bits/stdc++.h>
using namespace std;

int exponent(int n){
	int count = 0;
	while(n%2 == 0){
		n /= 2;
		count++;//3
	}
	return count;
}

int main(){
	int a, b; // 7 12
	cin >> a >> b;
	int noOfExp;
	map<int,int> mp;
	for(int i=a; i<=b; i++){
		noOfExp = exponent(i);
		mp[i] = noOfExp;
	}
	
	for(auto it:mp){
		cout << it.first << " " << it.second << endl;
	}
	
	int ans, m = -1;
	for(auto it : mp)
	{
		if(it.second > m){
			m = it.second;//3
			ans = it.first;//8
		} 
	}
	cout << "Ans is " << ans;
	
}