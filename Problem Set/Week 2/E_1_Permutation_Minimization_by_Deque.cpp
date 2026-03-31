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
        int n;
        cin >> n;
        vector<int> per(n);
        for (int i = 0; i < n; i++)
        {
            cin >> per[i];
        }

        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            if (dq.empty() || dq.front() > per[i])
            {
                dq.push_front(per[i]);
            }
            else
            {
                dq.push_back(per[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << dq[i] << " ";
        }
        cout << endl;
    }

    return 0;
}