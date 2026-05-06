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
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        for (int i = 0; i < n - 1; ++i)
            if (v[i] > v[i + 1])
            {
                int total = v[i] + v[i + 1], half = total / 2;
                v[i] = half, v[i + 1] = total - half, i++;
            }
        cout << (is_sorted(v.begin(), v.end()) ? "Yes" : "No") << "\n";
    }
}
