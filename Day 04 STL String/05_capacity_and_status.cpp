#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "Hello";

    cout << s.size() << endl;
    cout << s.length() << endl;

    cout << s.capacity() << endl;

    cout << s.empty() << endl;

    s.clear();

    cout << s.empty() << endl;

    return 0;
}