#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, h, w, t, cnt = 1;
    cin >> t;
    while (t--)
    {
        cin >> l >> h >> w;

        if (l <= 20 && h <= 20 && w <= 20)
            cout << "Case " << cnt++ << ": good\n";
        else
            cout << "Case " << cnt++ << ": bad\n";
    }

    return 0;
}