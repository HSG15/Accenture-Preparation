// Sample Input: A-AND , B-OR, C-XOR
// str: 0C1A1B1C1C1B0A0
// output: 1

#include<bits/stdc++.h>
using namespace std;

int binaryString(string str){
	int ans = 0;
	for(int i=0; i<str.size(); i++)
	{
		if(str[i]=='A')
		{
			ans = ans & str[i+1];
		}
		if(str[i]=='B')
		{
			ans = ans | str[i+1];
		}
		if(str[i]=='C')
		{
			ans = str[i-1] ^ str[i+1];
		}
	}
}

int main(){
	string str;
	cin >> str;
	cout << binaryString(str);
}