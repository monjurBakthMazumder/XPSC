#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    if(n % 2 == 1) cout << 0 << "\n";
	    else if(n / 10 == 0 && n % 2 ==0) cout << -1 << "\n";
	    else{
	        int temp = n;
	        int find_one  = 0;
	        
	        while(temp){
	            int val = temp%10;
	            if(val % 2 == 1 ){
	                find_one = 1;
	                break;
	            }
	            temp /= 10;
	        }
	        if(find_one) cout << 1 << "\n";
	        else {
    	        int count = 0;
    	        int ans = n;
    	        while(true){
    	            string s = to_string(ans);
    	            sort(s.begin(), s.end()); 
    	            ans -= s.back() - '0';
    	            if(ans % 2 == 1){
    	                break;
    	            }
    	            count++;
    	            
    	            int find_one =0;
    	            string s2 = to_string(ans);
    	            for(char c : s2)
    	                if((c - '0') % 2 ==1){
    	                    find_one = 1;
    	                    count++;
    	                    break;
    	                }
        	        if(find_one) break;
    	        }
	            cout << count <<"\n";
	        }
	    }
	}

}
