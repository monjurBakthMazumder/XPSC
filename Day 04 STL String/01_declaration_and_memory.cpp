#include <iostream>
#include <string>
using namespace std;

int main() {

    // Empty string
    string s1;

    // Direct initialization
    string s2 = "Hello";

    // Constructor style
    string s3("World");

    // Repeat character
    string s4(5, 'A');

    // Copy
    string s5 = s2;

    cout << s2 << endl;
    cout << s4 << endl;

    return 0;
}