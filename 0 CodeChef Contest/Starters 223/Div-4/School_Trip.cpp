#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x, k;
        cin >> n >> x >> k;
        
        int rest = x % k;
        
        if(rest == 0){
            cout << 0 << endl;
            continue;
        }
        
        int remove = rest;
        int add = k - rest;
        
        if(x + add > n){
            cout << remove << endl;
        } else {
            cout << min(remove, add) << endl;
        }
    }
}