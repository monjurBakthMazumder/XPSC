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
        cout << (n + 1) / 2 << "\n";

        for (int i = 0; i < (n + 1) / 2; i++)
        {
            int left = (i * 3) + 1;
            int right = (n * 3) - (i * 3);

            cout << left << " " << right << "\n";
        }
    }

    return 0;
}