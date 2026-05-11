#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x; map<int, int> mp;
    cin >> n >> m;
    while (n--) cin >> x, mp[x]++;
    while (m--){
        cin >> x;
        auto it = mp.upper_bound(x);
        if (it-- == mp.begin()) cout << -1 << "\n";
        else{
            cout << it->first << "\n";
            if (--it->second == 0) mp.erase(it);} }

    return 0;
}