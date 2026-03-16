#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "Hello Programming";

    // substring
    cout << s.substr(6, 11) << endl;

    // find
    cout << s.find("Pro") << endl;

    // rfind
    cout << s.rfind("g") << endl;

    // check exist
    if(s.find("Hello") != string::npos)
        cout << "Found";

    return 0;
}