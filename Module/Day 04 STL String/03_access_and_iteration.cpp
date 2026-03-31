#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "Programming";

    cout << s[0] << endl;
    cout << s.at(2) << endl;

    cout << s.front() << endl;
    cout << s.back() << endl;

    // Loop
    for(char c : s)
        cout << c << " ";

    cout << endl;

    return 0;
}