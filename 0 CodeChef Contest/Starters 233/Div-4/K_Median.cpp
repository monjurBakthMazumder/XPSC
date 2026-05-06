#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        sort(v.begin(), v.end());
        set<int> st;

        int start = (n - (k + 1)) / 2, end = start + k + 1;
        for (int i = start; i < end; i++)
            if (v[i])
                st.insert(v[i]);

        for (auto it = st.begin(); it != st.end(); it++)
            cout << *it << " ";
        cout << "\n";
    }
}
