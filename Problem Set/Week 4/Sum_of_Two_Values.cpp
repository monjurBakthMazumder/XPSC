#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }

    sort(v.begin(), v.end());

    int l = 0, r = n - 1;
    while (l < r)
    {
        int sum = v[l].first + v[r].first;
        if (sum == x)
        {
            cout << v[l].second << " " << v[r].second << endl;
            return 0;
        }
        else if (sum > x)
            r--;
        else
            l++;
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}