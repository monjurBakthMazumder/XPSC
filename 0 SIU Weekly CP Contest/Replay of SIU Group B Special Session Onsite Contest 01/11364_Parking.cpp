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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        int mn = *min_element(v.begin(), v.end());
        int mx = *max_element(v.begin(), v.end());

        cout << (mx - mn) * 2 << endl;
    }

    return 0;
}