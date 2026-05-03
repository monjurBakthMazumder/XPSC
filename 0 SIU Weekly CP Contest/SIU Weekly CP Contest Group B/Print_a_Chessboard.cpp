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
        int cnt = 0;
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                if (cnt % 2 == 0)
                    cout << "#";
                else
                    cout << ".";
                cnt++;
            }
            cnt = i + 1;
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}