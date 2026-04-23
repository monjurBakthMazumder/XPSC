#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans1 = 0, ans2 = 0, count = 0, val;
    while (v.size())
    {
        if (v.front() >= v.back())
        {
            val = v.front();
            v.erase(v.begin());
        }
        else
        {
            val = v.back();
            v.erase(v.end() - 1);
        }
        if (count % 2 == 0)
            ans1 += val;
        else
            ans2 += val;
        count++;
    }
    cout << ans1 << " " << ans2;

    return 0;
}