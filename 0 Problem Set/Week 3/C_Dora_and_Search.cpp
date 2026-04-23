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
        for (int &x : v)
            cin >> x;

        int l = 0, r = n - 1;
        int mn = 1, mx = n;

        while (l < r)
        {
            if (v[l] == mn)
            {
                l++;
                mn++;
            }
            else if (v[l] == mx)
            {
                l++;
                mx--;
            }
            else if (v[r] == mn)
            {
                r--;
                mn++;
            }
            else if (v[r] == mx)
            {
                r--;
                mx--;
            }
            else
            {
                cout << l + 1 << " " << r + 1 << endl;
                goto next_case;
            }
        }

        cout << -1 << endl;

    next_case:;
    }

    return 0;
}