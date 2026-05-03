#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, min_val = INT_MAX, max_val = INT_MIN;
    long long sum = 0;
    cin >> n;

    vector<int> v(n);
    for (int &x : v)
    {
        cin >> x;
        sum += x;
        max_val = max(max_val, x);
        min_val = min(min_val, x);
    }

    cout << min_val << " " << max_val << " " << sum << "\n";

    return 0;
}