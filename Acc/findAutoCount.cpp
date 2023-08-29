#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {
    int number;
    cin >> number;
    
    string str = to_string(number);// 6 2 1 0 0 0 1 0 0 0
    
    int a[10] = {0}; // 6 2 1 0 0 0 1 0 0 0
    for(int i=0; i<str.size(); i++){
    	a[str[i]-'0']++;
    }
    // cout << sizeof((int)str[2]) << sizeof(a[2]);
    
    bool flag = true;
    for(int i=0; i<str.size(); i++){
    	if(a[i] != (str[i]-'0')) cout  << false;
    	else cout << "eq" ;
    }
    
    int count = 0;
    if(flag){
    	for(int i=0; i<10; i++){
    		if(a[i]>0) count++;
    	}
    }
    
    cout << count;
    
}
