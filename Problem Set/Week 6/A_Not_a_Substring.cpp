#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.length();
 
        string t1 = "";
        for (int i = 0; i < n; i++) t1 += '(';
        for (int i = 0; i < n; i++) t1 += ')';
 
        string t2 = "";
        for (int i = 0; i < n; i++) t2 += "()";
 
        if (t1.find(s) == -1) {
            cout << "YES\n";
            cout << t1 << "\n";
        }
        else if (t2.find(s) == -1) {
            cout << "YES\n";
            cout << t2 << "\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}