#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];

        long long ans = 1, idx = 0;
        set<long long> st;
        st.insert(v[0]);

        for (long long i = 1; i < n; i++)
        {
            if (st.find(v[i]) != st.end())
            {
                st.erase(v[i]);
            }
            if (st.empty())
            {
                ans++;
                for (long long j = idx + 1; j <= i; j++)
                {
                    st.insert(v[j]);
                }
                idx = i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}