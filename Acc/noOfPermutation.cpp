#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
	int fact = 1;
	for(int i=2; i<=num; i++){
		fact = fact*i;
	}
	return fact;
}

int main(){
	string str;
	cin >> str;
	
	unordered_map<char, int> mp;
	for(int i=0; i<str.size(); i++)
	{
		mp[str[i]]++;
	}
	
	int fact = factorial(str.size()); //
	
	for(auto it : mp){
		if(it.second > 1){
			fact = fact / factorial(it.second);
		}
	}
	cout << fact;
}

