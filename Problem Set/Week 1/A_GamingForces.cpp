#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count_1 = 1;
        int count_not_1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                count_1++;
            }
            else
            {
                count_not_1++;
            }
        }
        int ans = count_not_1 + (count_1 / 2);
        cout << ans << endl;
    }

    return 0;
}