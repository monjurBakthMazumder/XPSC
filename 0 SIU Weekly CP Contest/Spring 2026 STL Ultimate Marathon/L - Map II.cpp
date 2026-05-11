#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string s;
    map<string, int> mp;
    cin >> t;
    while (t--)
        cin >> s, cout << ((mp[s]++ > 0) ? "YES" : "NO") << "\n";

    return 0;
}