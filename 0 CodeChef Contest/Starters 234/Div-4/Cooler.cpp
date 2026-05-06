#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int m , n;
	    cin >> m >> n; 
	    cout << ((m * (m+1)) / 2) - ((n * (n+1)) / 2)  << "\n";
	}

}
