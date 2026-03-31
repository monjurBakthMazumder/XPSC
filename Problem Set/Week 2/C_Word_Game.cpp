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
        int n, point1 = 0, point2 = 0, point3 = 0;
        cin >> n;
        vector<string> v1(n), v2(n), v3(n);
        for (int i = 0; i < n; i++)
            cin >> v1[i];
        for (int i = 0; i < n; i++)
            cin >> v2[i];
        for (int i = 0; i < n; i++)
            cin >> v3[i];

        for (int i = v1.size()-1; i >= 0; i--)
        {
            string target = v1[i];
            v1.pop_back();
            int p2 = 0, p3 = 0;
            for (int j = 0; j < v2.size(); j++)
                if (v2[j] == target)
                {
                    p2 = 1;
                    v2.erase(v2.begin() + j);
                    break;
                }
            for (int j = 0; j < v3.size(); j++)
                if (v3[j] == target)
                {
                    p3 = 1;
                    v3.erase(v3.begin() + j);
                    break;
                }
            if (p2 == 0 && p3 == 0)
                point1 += 3;
            else if (p2 == 1 && p3 == 0)
            {
                point1++;
                point2++;
            }
            else if (p2 == 0 && p3 == 1)
            {
                point1++;
                point3++;
            }
        }

        for (int i = v2.size()-1; i >= 0; i--)
        {
            string target = v2[i];
            v2.pop_back();
            int p3 = 0;
            for (int j = 0; j < v3.size(); j++)
                if (v3[j] == target)
                {
                    p3 = 1;
                    v3.erase(v3.begin() + j);
                    break;
                }
            if (p3 == 0)
                point2 += 3;
            else if (p3 == 1)
            {
                point2++;
                point3++;
            }
        }
        point3 += v3.size() * 3;
        cout << point1 << " " << point2 << " " << point3 << endl;
    }

    return 0;
}