#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H, W;
    while (cin >> H >> W)
    {
        if (H == 0 && W == 0)
            break;
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
                cout << "#";
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}