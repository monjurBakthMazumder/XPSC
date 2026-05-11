#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n; cin >> t;
    while (t--) {
        cin >> n; vector<int> v(n);
        for (int &x : v) cin >> x;
        sort(v.rbegin(), v.rend()), unique(v.begin(), v.end()), cout << v[0] + v[1] << "\n";}
    return 0;
}