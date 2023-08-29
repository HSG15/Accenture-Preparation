#include<bits/stdc++.h>
using namespace std;

//Trailing zeros of factorial of a number 
// e.g. - 5 -> 120 -> 1 TZ
// 	  10 -> 3628800 -> 2 TZ
// 	  100 -> 24 TZ

int tz(int num){
	int count = 0;
	for(int i=5; num/i>=1; i*=5){
		count += num/i;
	}
	return count;
}

int main(){
	int num;
	cin >> num;
	int ans = tz(num);
	cout << ans;
}