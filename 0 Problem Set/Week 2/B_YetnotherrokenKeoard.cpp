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
        string s, ans;
        cin >> s;
        vector<pair<int, char>> upper;
        vector<pair<int, char>> lower;
        for (int i = 0; i < s.size(); i++)
        {
            if (islower(s[i]) && s[i] != 'b')
                lower.push_back({i, s[i]});
            if (isupper(s[i]) && s[i] != 'B')
                upper.push_back({i, s[i]});
            if (s[i] == 'b' && !lower.empty())
                lower.pop_back();
            if (s[i] == 'B' && !upper.empty())
                upper.pop_back();
        }
        while (true)
        {
            int upperIdx = INT_MIN, lowerIdx = INT_MIN;
            if (upper.size())
                upperIdx = upper.back().first;
            if (lower.size())
                lowerIdx = lower.back().first;
            if (upperIdx > lowerIdx)
            {
                ans.push_back(upper.back().second);
                upper.pop_back();
            }
            if (upperIdx < lowerIdx)
            {
                ans.push_back(lower.back().second);
                lower.pop_back();
            }
            if (!upper.size() && !lower.size())
            {
                break;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}