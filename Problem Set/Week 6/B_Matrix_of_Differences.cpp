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
        int arr[n + 1][n + 1];
        int cnt = 1, l = 1, r = n * n;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (cnt % 2 == 1)
                        arr[i][j] = l, l++;
                    else
                        arr[i][j] = r, r--;
                    cnt++;
                }
            }
            else
            {
                for (int j = n; j >= 1; j--)
                {
                    if (cnt % 2 == 1)
                        arr[i][j] = l, l++;
                    else
                        arr[i][j] = r, r--;
                    cnt++;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}