#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;

    multiset<int> plens;
    set<int> pos;
    pos.insert(0);
    pos.insert(x);
    plens.insert(x);

    for (int i = 1; i <= n; i++)
    {
        int p;
        cin >> p;

        auto right = pos.upper_bound(p);
        auto left = right;
        left--;

        int l = *left, r = *right;

        plens.erase(plens.find(r - l));
        plens.insert(p - l);
        plens.insert(r - p);

        cout << *plens.rbegin() << " ";

        pos.insert(p);
    }

    return 0;
}