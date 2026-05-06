#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);

        for(int &x : v) cin >> x;

        int count = 0;

        for(int i = 0; i < n; i++){
            int L = 0, R = 0;

           
            for(int j = 0; j < i; j++){
                if(v[j] < v[i]) L++;
            }

            
            for(int j = i+1; j < n; j++){
                if(v[j] > v[i]) R++;
            }

            if(L == R) count++;
        }

        cout << count << endl;
    }
}