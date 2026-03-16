// 08_pass_2d_vector_to_function.cpp

#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> &v){

    for(auto row : v){
        for(auto val : row)
            cout << val << " ";
        cout << endl;
    }
}

int main(){

    vector<vector<int>> v = {
        {1,2},
        {3,4}
    };

    print(v);
}