#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        long long a = (x * x * x * x) + (4 * y * y);
        long long b = 4 * x * x * y;
        if (a == b)
            cout << "YES \n";
        else
            cout << "NO\n";
    }

    return 0;
}