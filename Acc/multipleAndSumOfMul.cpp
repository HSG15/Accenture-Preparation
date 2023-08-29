#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i=1; i<=10; i++)
	{
		cout << n*i << " ";
		v.push_back(n*i);
	}
	int sum = 0;
	for(int i:v) sum += i;
	cout << endl << sum;
}