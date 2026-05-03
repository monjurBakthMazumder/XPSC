#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, val;
    char c;
    cin >> n;
    vector<int> spade(14, 0), heart(14, 0), club(14, 0), diamond(14, 0);
    while (n--)
    {
        cin >> c >> val;
        if (c == 'S')
            spade[val]++;
        else if (c == 'H')
            heart[val]++;
        else if (c == 'C')
            club[val]++;
        else if (c == 'D')
            diamond[val]++;
    }

    for (int i = 1; i < 14; i++)
        if (spade[i] == 0)
            cout << 'S' << " " << i << "\n";
    for (int i = 1; i < 14; i++)
        if (heart[i] == 0)
            cout << 'H' << " " << i << "\n";
    for (int i = 1; i < 14; i++)
        if (club[i] == 0)
            cout << 'C' << " " << i << "\n";
    for (int i = 1; i < 14; i++)
        if (diamond[i] == 0)
            cout << 'D' << " " << i << "\n";

    return 0;
}