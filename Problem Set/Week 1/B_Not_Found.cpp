// Problem Link: https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v(26, 0);
    for (char c : s)
    {
        v[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == 0)
        {
            char c = 'a' + i;
            cout << c;
            return 0;
        }
    }
    cout << "None";
    return 0;
}