#include <bits/stdc++.h>
using namespace std;

int main(){
	int range;
	cout << "Enter the range : ";
	cin >> range;
	
	for(int i=2; i<=range; i++)
	{
		bool flag = true;
		for(int j=2; j<i; j++)
		{
			if(i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag) cout << i << " ";
	}	
}
