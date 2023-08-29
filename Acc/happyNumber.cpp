#include <bits/stdc++.h>
using namespace std;

int squareSum(int n){
	int sum = 0;
	while(n > 0){
		int digit = n % 10;//1
		sum = sum + (digit*digit);//1
		n = n / 10;	//0
	}
	return sum;
}

int main(){
	int num;
	cin >> num; //19
	
	unordered_set<int> s;
	while(num != 1 && s.find(num) == s.end()){
		s.insert(num); //19, 82, 68, 100
		num = squareSum(num);//1
	}
	
	if(num == 1) cout << "Happy number";
	else cout << "Not a happy number";
	
}