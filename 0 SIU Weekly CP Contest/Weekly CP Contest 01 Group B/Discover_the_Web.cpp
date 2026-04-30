#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        cnt++;
        cout << "Case " << cnt << ":" << "\n";
        stack<string> st_backward, st_forward;
        string current = "http://www.lightoj.com/";
        while (true)
        {
            string s;
            cin >> s;
            if (s == "BACK")
            {
                if (st_backward.empty())
                    cout << "Ignored\n";

                else
                {
                    st_forward.push(current);
                    current = st_backward.top();
                    st_backward.pop();
                    cout << current << "\n";
                }
            }
            else if (s == "FORWARD")
            {
                if (st_forward.empty())
                    cout << "Ignored\n";

                else
                {
                    st_backward.push(current);
                    current = st_forward.top();
                    st_forward.pop();
                    cout << current << "\n";
                }
            }
            else if (s == "VISIT")
            {
                string url;
                cin >> url;
                st_backward.push(current);
                current = url;

                while (!st_forward.empty())
                    st_forward.pop();

                cout << current << "\n";
            }
            else if (s == "QUIT")
            {
                break;
            }
        }
    }

    return 0;
}