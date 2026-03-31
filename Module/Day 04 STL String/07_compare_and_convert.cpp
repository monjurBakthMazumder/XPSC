#include <iostream>
#include <string>
using namespace std;

int main() {

    string a = "apple";
    string b = "banana";

    if(a == b)
        cout << "Equal\n";

    cout << a.compare(b) << endl;

    // number → string
    string num = to_string(100);

    // string → number
    int x = stoi("123");
    double y = stod("3.14");

    cout << x + 10 << endl;

    return 0;
}