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
        int n, coin = 0;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;

        int minLoss = a[0] - b[0];
        for (int i = 0; i < n; i++)
        {
            coin += a[i];
            minLoss = min(minLoss, (a[i] - b[i]));
        }
        cout << coin - minLoss << endl;
    }

    return 0;
}