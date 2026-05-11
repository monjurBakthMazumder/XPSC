#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, q, n, m; string s; map<string, string> mp;
    cin >> t;
    while (t--) cin >> n >> m >> s, mp[to_string(n) + " " + to_string(m)] = s;
    cin >> q;
    while (q--) cin >> n >> m, cout << mp[to_string(n) + " " + to_string(m)] << "\n";

    return 0;
}