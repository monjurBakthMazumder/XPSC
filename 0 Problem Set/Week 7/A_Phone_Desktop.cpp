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
        int x, y;
        cin >> x >> y;
        int screen = (y + 1) / 2;
        int screen_free_space = screen * 15 - y * 4;

        if (screen_free_space >= x)
            cout << screen << "\n";
        else
        {
            int rest_applications = x - screen_free_space;
            screen += (rest_applications + 14) / 15;
            cout << screen << "\n";
        }
    }

    return 0;
}