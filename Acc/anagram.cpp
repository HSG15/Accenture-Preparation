// Example :

// Input : cat dog god tca

// Output : [[1, 4], [2, 3]]


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> anagrams(vector<string>& s){
	vector<vector<int>> ans;
	int siz = s.size();
	for(int i=0; i<siz; i++)
	{
		sort(s[i].begin(), s[i].end());
	}
	// act, dgo, dgo, act
	for(int i=0; i<siz; i++)
	{
		for(int j=i+1; j<siz; j++)
		{
			if(s[i] == s[j])
			{
				ans.push_back({i+1, j+1});
			}
		}
	}
	return ans;
}

int main(){
	vector<string> v =  {"dom", "key", "tom", "mod", "mot", "eyk"};
	vector<vector<int>> ans = anagrams(v);
	
	for (auto& pair : ans) {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }
}