#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, ans =0;
        string s;
        cin >> n  >> s;
        
        for(int len = 1; len <=n; ++len){
            for(int pos = 0; pos < n; ++pos){
                if(pos+ len > n) break;
                string target = s.substr(pos, len);
                
                bool cute = true;
                if(len %2 != 1){
                    cute = false;
                }
                for(int i=0; i<len; ++i){
                    if(i%2 == 0){
                        if(target[i] == 'u' || target[i] == 'o'){
                            continue;
                        }
                        else{
                            cute = false;
                        }
                    }else{
                        if(target[i] == 'w'  ){
                            continue;
                        }
                        else{
                            cute = false;
                        }
                    }
                }
                if(cute){
                    ans = max(ans,len);
                }
                
            }
        }
            cout << ans << "\n";
        
    }
}