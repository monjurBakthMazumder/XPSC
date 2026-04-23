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
        int n, i = 0;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;

        bool sorted = true;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                sorted = false;
                break;
            }
        }

        if (sorted)
            cout << n << "\n";
        else
            cout << 1 << "\n";
    }

    return 0;
}