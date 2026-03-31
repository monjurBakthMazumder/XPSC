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

        long long sum = 0, count = 0, i = 0;
        bool nagStart = false;

        while (i < n)
        {
            int val = v[i];
            sum += abs(val);
            if (val < 0 && !nagStart)
            {
                nagStart = true;
                count++;
            }
            else if(val > 0) nagStart = false;
            i++;
        }

        cout << sum << " " << count << "\n";
    }

    return 0;
}