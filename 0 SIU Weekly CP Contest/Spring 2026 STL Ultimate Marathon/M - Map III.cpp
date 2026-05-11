#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, q; string ip, name; map<string, string> mp;
    cin >> t >> q;
    while (t--) cin >> name >> ip, mp[ip] = name;
    while (q--) cin >> name >> ip, ip.pop_back(), cout << name << " " << ip << "; #" << mp[ip] << "\n";
    return 0;
}