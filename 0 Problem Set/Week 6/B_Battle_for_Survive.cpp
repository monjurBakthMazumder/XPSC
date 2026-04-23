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
        long long n, sum = 0, second_last_val, last_val;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n - 2; i++)
            cin >> v[i], sum += v[i];
        cin >> second_last_val >> last_val;
        second_last_val -= sum, last_val -= second_last_val;
        cout << last_val << endl;
    }

    return 0;
}