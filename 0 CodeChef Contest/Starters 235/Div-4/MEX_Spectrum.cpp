#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v(n);
	    for(int &x : v) cin >> x;
	    
	    map<int, int> mp;
	    
	    for(int i=0; i<n; i++) mp[v[i]]++;

        set<int> available;	    
	    
	    for(int i =0; i<=n; i++){
	        int ans_1 = mp[i];
	        int ans_2 = i-available.size();
	        
	        if(mp[i]){
	            available.insert(i);
	        }
	        cout << max(ans_1, ans_2) << " ";
	    }
	    cout << "\n";
	}
}
