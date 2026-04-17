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
        vector<int> v(n), alphabet(26, 0);
        string s = "";
        for (int &x : v)
            cin >> x;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < 26; j++)
                if (v[i] == alphabet[j])
                {
                    s.push_back('a' + j), alphabet[j]++;
                    break;
                }
        cout << s << "\n";
    }

    return 0;
}