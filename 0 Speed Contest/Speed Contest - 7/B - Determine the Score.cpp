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
        int x, n;
        cin >> x >> n;

        cout << ((x / 10) * n) << "\n";
    }

    return 0;
}