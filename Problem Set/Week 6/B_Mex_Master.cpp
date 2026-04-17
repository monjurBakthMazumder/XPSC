#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int cnt0 = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                cnt0++;
        }

        if (cnt0 - 1 <= n - cnt0 || cnt0 == 0)
            cout << 0 << '\n';
        else
        {
            int mx = *max_element(v.begin(), v.end());
            if (mx == 1)
                cout << 2 << '\n';
            else
                cout << 1 << '\n';
        }
    }

    return 0;
}