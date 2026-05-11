#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, instruction, val; string key; map<string, int> mp; cin >> t; 
    while (t--){
        cin >> instruction >> key;
        if (instruction == 1) cin >> val, mp[key] += val;
        if (instruction == 2) mp[key] = 0;
        if (instruction == 3) cout << mp[key] << "\n";}
    return 0;
}