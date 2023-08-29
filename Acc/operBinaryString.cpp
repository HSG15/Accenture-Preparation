#include<bits/stdc++.h>
using namespace std;

int main(){
	string s = "0C1A1B1C1C1B0A0";
	stack<int> st;
	
	for(char c : s){
		if(c == '0' || c == '1'){
			int num = c - '0';
			st.push(num);
		} else if (c == 'A'){
			int op1 = st.top();
			st.pop();
			int op2 = st.top();
			st.pop();
			st.push(op1 & op2);
		} else if (c == 'B'){
			int op1 = st.top();
			st.pop();
			int op2 = st.top();
			st.pop();
			st.push(op1 | op2);
		} else if (c == 'C'){
			int op1 = st.top();
			st.pop();
			int op2 = st.top();
			st.pop();
			st.push(op1 ^ op2);
		}
	}
	
	int result = st.top();
	cout << st.top();
	st.pop();
}