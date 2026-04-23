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
        int n, max_val = INT_MIN, x;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            max_val = max(x, max_val);
        }
        cout << max_val * n << "\n";
    }

    return 0;
}