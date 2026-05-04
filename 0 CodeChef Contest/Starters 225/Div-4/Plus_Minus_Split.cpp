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

        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res = 1;
            for (int j = 0; j < n; j++)
            {
                long long temp = (j < i) ? v[j] + v[i] : v[j] - v[i];
                if (temp != 0)
                {
                    res = 0;
                    break;
                }
            }
            if (res == 1)
                break;
        }
        cout << ((res) ? "Yes" : "No") << "\n";
    }

    return 0;
}