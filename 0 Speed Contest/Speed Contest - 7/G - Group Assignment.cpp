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
        int n, x;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            cin >> x, mp[x]++;

        bool flag = true;
        for (auto [val, cnt] : mp)
            if (val != cnt && cnt % val != 0)
            {
                flag = false;
                break;
            }

        cout << (flag ? "YES" : "NO") << "\n";
    }

    return 0;
}