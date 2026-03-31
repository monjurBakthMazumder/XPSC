#include <bits/stdc++.h>
using namespace std;

int main() {
    tuple<int, string, double> data = {404, "Not Found", 3.14};

    // 1. std::tie (The pre-C++17 way to unpack, still useful!)
    // It allows you to assign tuple values to ALREADY EXISTING variables.
    int code;
    string message;
    double pi;
    tie(code, message, pi) = data; 

    // 2. std::ignore
    // What if you only care about the message and want to ignore the numbers?
    string just_message;
    tie(ignore, just_message, ignore) = data;
    cout << "Just the message: " << just_message << "\n";

    // 3. Modifying tuple elements
    get<0>(data) = 200;
    get<1>(data) = "OK";
    
    // 4. tuple_cat (Concatenating tuples)
    tuple<int, int> tA = {1, 2};
    tuple<string, string> tB = {"A", "B"};
    
    // Combines tA and tB into a 4-element tuple!
    auto combined = tuple_cat(tA, tB); 
    auto [n1, n2, s1, s2] = combined;
    
    return 0;
}