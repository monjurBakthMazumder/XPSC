#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int ans =0;
	    map<int, int> mp;
	    for (int i=0; i< n; i++){
	        int x;
	        cin >> x;
	        if (mp.find(x-1)!= mp.end() || x ==1){
	            mp[x]++;
	            ans++;
	        }
	    }
	    cout << ans << endl;
	}
}
