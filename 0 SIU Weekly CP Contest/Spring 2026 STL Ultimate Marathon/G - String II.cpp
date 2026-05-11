#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n; string s; cin >> t;
    while (t--) {
        cin >> n >> s;
        for (char &c : s) c = towlower(c);
        s.erase(unique(s.begin(), s.end()), s.end());
        cout << ((s == "meow") ? "YES" : "NO") << "\n"; }
    return 0;
}