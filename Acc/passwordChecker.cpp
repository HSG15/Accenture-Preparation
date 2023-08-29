/* 
You are given a function, int CheckPassword(char str[], int n);
The function accepts string str of size n as an argument. 
Implement the function which returns 1 if given string str is valid password else O.
str is a valid password if it satisfies the below conditions.
	• At least 4 characters
	• At least one numeric digit
	• At Least one Capital Letter
	• Must not have space or slash (/)
	• Starting character must not be a number
*/

#include<bits/stdc++.h>
using namespace std;

int CheckPassword(string str, int n){
	if (str.size() < n) return 0;
	if(str[0] >= '0' && str[0] <= '9') return 0;
	
	bool hasDigit = false;
	bool hasCapitalChar = false;
	bool hasSpecialChar = false;

	for(char c : str){
		if(c >= '0' && c <= '9') hasDigit = true;
		else if(c >= 'A' && c <= 'Z') hasCapitalChar = true;
		else if (string("!@#$%^&*()-+").find(c) != string::npos) {
            hasSpecialChar = true;
        }
	}
	if(hasDigit && hasCapitalChar && hasSpecialChar) return 1;
	return 0;
}

int main(){
	int siz;
	string str;
	cout << "size : ";
	cin >> siz;
	cout << "Password : ";
	cin >> str;
	int ans = CheckPassword(str, siz);
	if(ans) cout << "Valid Password ✅";
	else cout << "Invalid Password ❌";
}