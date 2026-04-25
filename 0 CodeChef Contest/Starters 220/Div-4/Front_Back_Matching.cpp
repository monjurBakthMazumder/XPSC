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
	    map<char, int> mp;
	    for(int i=0; i<n ; i++){
	        mp[s[i]]++;
	    }
	    
	    int flag = 0;
	    for(auto it = mp.begin(); it != mp.end() ; it++){
	        if(it->second > 1){
	            flag = 1;
	            break;
	        }
	    }
	    if(flag) cout << "Yes\n";
	    else cout << "No\n";
	}

}
