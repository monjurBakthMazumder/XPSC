#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, count = 0, sum = 0, val, need;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        while (!v.empty())
        {
            val = v.back();
            v.pop_back();
            if (val >= x)
            {
                count++;
                sum += val - x;
            }
            else
            {
                need = x - val;
                if (need <= sum)
                {
                    count++;
                    sum -= x - val;
                }
                else{
                    break;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}