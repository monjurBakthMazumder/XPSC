#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int &val : v)
        cin >> val;

    int l = 0;
    long long current_sum = 0;
    int count = 0;

    for (int r = 0; r < n; r++)
    {
        current_sum += v[r];

        while (current_sum > x)
        {
            current_sum -= v[l];
            l++;
        }

        if (current_sum == x)
        {
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}