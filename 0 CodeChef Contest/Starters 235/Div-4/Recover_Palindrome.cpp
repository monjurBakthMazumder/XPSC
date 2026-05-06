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
	    int flag = 1;
	    int l=0, r=n-1;
	    while(l < r){
	        if(s[l] == '?' && s[r] == '?'){
	            flag =0;
	            break;
	        }
	        l++, r--;
	    }
	    if(n % 2 == 1 && s[n/2] == '?') flag = 0;
	    if(flag) cout << "YES\n";
	    else cout << "NO\n";
	}

}
