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
        int n, m;
        cin >> n >> m;

        string s, c;
        vector<int> index(m);
        cin >> s;
        for (int &x : index)
            cin >> x;

        cin >> c;

        set<int> idx;
        for (int i : index)
            idx.insert(i - 1);

        sort(c.begin(), c.end());

        int j = 0;
        for (auto i : idx)
        {
            s[i] = c[j++];
        }
        cout << s << endl;
    }

    return 0;
}