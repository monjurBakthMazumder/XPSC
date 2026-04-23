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
        vector<int> v(n * 2, 0), v2;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> v[i + j];

        v.pop_back();
        v2 = v;
        sort(v2.begin(), v2.end());

        for (int i = 1; i <= n * 2; i++)
            if (i != v2[i - 1] || i == n * 2)
            {
                cout << i << " ";
                break;
            }

        for (int val : v)
            cout << val << " ";
        cout << "\n";
    }

    return 0;
}