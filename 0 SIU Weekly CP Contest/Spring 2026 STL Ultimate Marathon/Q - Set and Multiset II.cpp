#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,m,x,ans = 0; set<long long> N,M; cin >> n >>m;
    while (n--) cin >> x, N.insert(x);
    while (m--) cin >> x, M.insert(x);
    auto r= N.begin(), l = M.begin() ;
    while (r != N.end() && l != M.end())
        if(*r == *l) ans++, r++, l++;
        else if(*r > *l) l++;
        else r++;
    cout << ans << "\n";
    return 0;
}