// Problem Link: https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, T;
    cin >> S >> T;
    int count = 0;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] != T[i])
        {
            count++;
        }
    }

    cout << count;

    return 0;
}