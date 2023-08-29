#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin >> num;
	int n = num;
	int sum = 0;
	while(num > 0){
		int digit = num % 10;
		sum += pow(digit,3);
		num /= 10;
	}
	if(sum == n) cout << "Armstrong number";
	else cout << "Not Armstrong number";
}