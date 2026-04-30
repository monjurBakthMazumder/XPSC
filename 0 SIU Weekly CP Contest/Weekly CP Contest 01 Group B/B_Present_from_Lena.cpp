#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i - 1; j++)
        {
            cout << j;
            if (i == 1 && j == 0)
            {
            }
            else
                cout << " ";
        }
        for (int j = i - 2; j >= 0; j--)
        {
            cout << j;
            if (j != 0)
                cout << " ";
        }

        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j <= n - i; j++)
        {
            cout << j;
            if (j == n - i && n == i)
            {
            }
            else
                cout << " ";
        }
        for (int j = n - i - 1; j >= 0; j--)
        {
            cout << j;
            if (j != 0)
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}