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
        int n, x, flag = 0;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] < x && x < v[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}