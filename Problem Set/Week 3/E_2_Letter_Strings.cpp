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

        vector<string> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        map<string, int> freq;

        for (int i = 0; i < n; i++)
        {
            freq[s[i]]++;
        }

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            freq[s[i]]--;
            string a = s[i], b = s[i];
            for (char ch = 'a'; ch <= 'k'; ch++)
            {
                a[0] = ch;
                b[1] = ch;

                if (a != s[i])
                {
                    ans += freq[a];
                }
                if (b != s[i])
                {
                    ans += freq[b];
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}