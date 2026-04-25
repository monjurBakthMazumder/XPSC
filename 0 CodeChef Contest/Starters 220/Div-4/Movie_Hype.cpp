#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v(n+1);
	    for(int &x : v) cin >> x;
	    int ans = INT_MAX;
	    for(int i =1; i<=n ; i++){
	        int val = max(v[i] ,v[i-1]);
	        ans = min (ans,val);
	    }
	    cout << ans << "\n";
	}

}
