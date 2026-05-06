#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, n, k, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<int> v, v2;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x != k)
                v.push_back(x);
        }
        v2 = v;
        reverse(v2.begin(), v2.end());
        cout << ((v2 == v) ? "Yes" : "No") << "\n";
    }
}
