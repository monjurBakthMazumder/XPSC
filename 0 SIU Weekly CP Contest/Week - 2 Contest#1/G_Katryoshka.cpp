#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, k;
    cin >> n >> m >> k;
    long long ans = min({n, m, k});
    n -= ans;
    m -= ans;
    k -= ans;
    long long n_2 = n / 2;
    long long ans_2 = min({(n_2), m, k});
    n -= ans_2 * 2;
    m -= ans_2;
    k -= ans_2;
    n_2 = n / 2;
    long long ans_3 = min({(n_2), k});
    cout << ans + ans_2 + ans_3;

    return 0;
}