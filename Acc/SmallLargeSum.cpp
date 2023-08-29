/*Write a function SmallLargeSum(array) which accepts the array as an argument or parameter, 
that performs the addition of the second largest element from the even location with the 
second largest element from an odd location
Input:
6
321754
Output:
7
*/

#include<bits/stdc++.h>
using namespace std;
int SmallLargeSum(vector<int> v, int siz){
	int eNum, oNum;
	vector<int> ev, ov;
	for(int i=0; i<siz; i+=2)
	{
		ev.push_back(v[i]);
		ov.push_back(v[i+1]);
		
	}
	sort(ev.begin(), ev.end());
	sort(ov.begin(), ov.end());
	
	eNum = ev[ev.size()-2];
	oNum = ov[ov.size()-2];
	
	return eNum + oNum;
}

int main()
{
	vector<int> v = {5,10,15,20,25,6,30};
	int siz = v.size();
	int ans = SmallLargeSum(v, siz);
	cout << ans;
}