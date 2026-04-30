#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int pos, x, y, z;

    while (cin >> pos >> x >> y >> z)
    {
        if (pos == 0 && x == 0 && y == 0 && z == 0)
            break;

        int ans = 1080;  

        ans += ((pos - x + 40) % 40) * 9;
        ans += ((y - x + 40) % 40) * 9;
        ans += ((y - z + 40) % 40) * 9;

        cout << ans << "\n";
    }

    return 0;
}