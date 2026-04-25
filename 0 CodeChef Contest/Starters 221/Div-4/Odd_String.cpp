#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    string s;
	    cin >> n >>s;
	    
	    map<char,int> mp;
        for(char c : s) mp[c]++;


	    bool flag = true;
	    int limit = ((n + 1) / 2) +1;
	    
	    for(auto it = mp.begin(); it != mp.end(); it++){
	        if(it->second  > 2){
	            flag = false;
	            break;
	        }
	    }
	    cout << (flag ? "YES\n" : "NO\n");

	}
}
