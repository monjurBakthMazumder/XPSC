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
        long long n, sum = 0, count_zero = 0;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        bool found_non_zero = false;
        for (int i = 0; i < n - 1; i++)
        {
            sum += v[i];
            if (v[i] != 0)
                found_non_zero = true;
            else if (found_non_zero && v[i] == 0)
                count_zero++;
        }
        cout << (sum + count_zero) << "\n";
    }

    return 0;
}