/* You are required to implement the following function: int CountSpecificNumbers(int m, int n);
The function accepts two arguments m and n which are integers. 
You are required to calculate the count of numbers having only 1, 4 and 9 as their digits between
the numbers lying in the range m and n both inclusive, and return the same. Return -1 if m>n.
Sample Input:
100
200
Sample Output:
9
Explanation:
The numbers between 100 and 200, both inclusive having only 1,4 and 9 as their digits are 
111, 114, 119, 141, 144, 149, 191, 194, 199. The count is 9 hence 9 is returned. */

#include<bits/stdc++.h>
using namespace std;

int countSpecificNumbers(int m, int n){
	if(m > n) return -1;
	int count = 0;
	
	for(int i=m; i<=n; i++){
		string s = to_string(i);
		bool flag = true;
		for(int j=0; j<s.size(); j++){
			if(s[j] == '0' || s[j] == '2' || s[j] == '3' || s[j] == '5' || s[j] == '6' || s[j] == '7' || s[j] == '8'){
				flag = false;
				break;
			}
		}
		if(flag) count+=1;
	}
	return count;
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << countSpecificNumbers(a, b);
}