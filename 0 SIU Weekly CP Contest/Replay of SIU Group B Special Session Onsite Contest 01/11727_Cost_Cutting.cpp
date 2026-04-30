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
        int x, y, z;
        cin >> x >> y >> z;

        vector<int> v = {x, y, z};
        sort(v.begin(), v.end());

        cout << "Case " << cnt << ": " << v[1] << "\n";
    }

    return 0;
}