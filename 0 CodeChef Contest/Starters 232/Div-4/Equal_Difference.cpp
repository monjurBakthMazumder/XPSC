#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n + 1, 0);
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
            cin >> v[i], mp[v[i] - i]++;

        int count = 0;
        for (auto [val, cnt] : mp)
            count += (cnt * (cnt - 1)) / 2;
        cout << count << endl;
    }
}
