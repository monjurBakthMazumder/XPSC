#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int fre[26] ={0};
        for (int i = 0; i < n; i++)
        {
            fre[s[i]-'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (!k)
            {
                break;
            }
            if (fre[i] % 2 == 1)
            {
                fre[i]--;
                k--;
            }
        }
        int odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if (fre[i] % 2 == 1)
            {
                odd++;
            }
        }
        if (odd > 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}