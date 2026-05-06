#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, sum = 0; 
	    cin >> n;
	    vector<int> v(n);
	    
	    for(int &x : v) cin >> x,  sum+= x; 
	    sort(v.begin(), v.end());
	    
	    int ans = n;
	    for(int i=0; i<n; i++){
	        if(sum >= 0) break;
	        sum -= v[i];
	        ans--;
	    }
	    cout << ans << endl;
	}

}
