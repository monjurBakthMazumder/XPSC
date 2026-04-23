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
        int n, flag = 1;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        reverse(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            int val = v[i];
            if (mp[val] > 0)
            {
                cout << n - i << endl;
                flag = 0;
                break;
            }
            else
            {
                mp[val]++;
            }
        }
        if (flag)
        {
            cout << 0 << endl;
        }
    }

    return 0;
}