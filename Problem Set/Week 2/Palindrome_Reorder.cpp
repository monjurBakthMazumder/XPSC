#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s2 = "", s3;
    cin >> s;
    int n = s.size(), odd = 0;
    char mid;

    map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second % 2 == 1)
        {
            mid = it->first;
            odd++;
        }
        int times = it->second / 2;
        while (times--)
        {
            s2.push_back(it->first);
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    s3 = s2;
    reverse(s3.begin(), s3.end());
    if (mid)
        s2.push_back(mid);
    cout << s2 + s3;

    return 0;
}