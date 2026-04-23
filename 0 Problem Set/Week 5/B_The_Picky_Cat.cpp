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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i], v[i] = abs(v[i]);

        int val = v[0];

        sort(v.begin(), v.end());

        int k = n / 2;

        if (v[k] >= val)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
