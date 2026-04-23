#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int  i = 1, result = -1;
    while (true)
    {
        int val = c * i;
        if(val > b){
            break;
        }
        if(val >= a && val <= b){
            result = val;
            break;
        }
        i++;
    }
    cout << result;
    
    return 0;
}