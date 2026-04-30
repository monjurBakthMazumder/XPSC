#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, cnt = 0;
    cin >> t;
    while (t--)
    {
        cnt++;
        string n;
        cin >> n;
        string n2 = n;
        reverse(n2.begin(), n2.end());
        if (n == n2)
            cout << "Case " << cnt << ": Yes" << "\n";
        else
            cout << "Case " << cnt << ": No" << "\n";
    }

    return 0;
}