#include <bits/stdc++.h>
using namespace std;
const int B = 30;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> v(N);
        for (int &x : v)
            cin >> x;

        vector<int> bits(B + 1);
        for (int i = 0; i < N; i++)
            for (int k = B; k >= 0; k--)
                if ((v[i] >> k) & 1)
                    bits[k]++;

        int ans = 0;
        for (int k = B; k >= 0; k--)
            if (bits[k] == N)
                ans += (1 << k);
            else
            {
                int need = N - bits[k];
                if (K >= need)
                {
                    ans += (1 << k);
                    K -= need;
                }
            }

        cout << ans << "\n";
    }

    return 0;
}