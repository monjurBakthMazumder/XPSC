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
        int n, break_point = 0;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        for (int i = 1; i < n; i++)
            if (v[i] < v[i - 1])
                break_point++;

        cout << ((break_point == 0 || break_point == 1 && v[n - 1] <= v[0]) ? "Yes" : "No") << "\n";
    }

    return 0;
}