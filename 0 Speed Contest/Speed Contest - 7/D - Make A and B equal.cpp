#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        while (a % 2 == 0)
            a /= 2;
        while (b % 2 == 0)
            b /= 2;
        cout << ((a == b) ? "YES" : "NO") << "\n";
    }

    return 0;
}