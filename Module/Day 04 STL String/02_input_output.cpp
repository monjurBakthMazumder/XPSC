#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;

    // Single word input
    cin >> name;

    // Full line input
    cin.ignore();
    getline(cin, name);

    cout << name << endl;

    return 0;
}