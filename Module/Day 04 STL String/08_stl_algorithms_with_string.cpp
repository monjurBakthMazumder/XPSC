#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    string s = "monjur";

    // sort
    sort(s.begin(), s.end());

    // reverse
    reverse(s.begin(), s.end());

    // count
    cout << count(s.begin(), s.end(), 'u');

    // uppercase
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s;

    return 0;
}