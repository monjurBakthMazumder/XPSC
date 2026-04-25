#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n , a,b;
	    cin >> n >> a >> b;
	    
	    vector<int> v(n);
	    for(int &x : v) cin >> x;
	    
	    int cnt = 0;
	    bool weared = false;
	    for(int i=0; i<n; i++){
	        if(v[i] < a && !weared) weared = true, cnt++;
	        else if(v[i] > b && weared) weared = false;
	    }
	    
	    cout << cnt << "\n";
	}

}
