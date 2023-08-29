#include <bits/stdc++.h>
using namespace std;

int main(){
	string s = "Move-Hyphen-To-Front";
	queue<char> q;
	for(char c : s) q.push(c);
	
	string ans = "", hyphen = "";
	while(!q.empty()){
		if(q.front() != '-') ans += q.front();
		else hyphen += q.front();
		q.pop();
	}
	cout << hyphen + ans;
}