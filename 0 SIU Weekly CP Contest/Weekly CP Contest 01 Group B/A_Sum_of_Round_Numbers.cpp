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
        string s;
        cin >> s;
        int n = s.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '0')
            {
                string ans = "";
                ans.push_back(s[i]);
                int zeros = n - i - 1;
                while (zeros--)
                    ans.push_back('0');
                v.push_back(stoll(ans));
            }
        }
        cout << v.size() << endl;
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}