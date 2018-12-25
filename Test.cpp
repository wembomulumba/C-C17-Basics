#include <iostream>
#include <vector>

using namespace std;

int main() {

    // an array with 3 rows and 2 columns
    int x[3][4] = { {3,5,67,77}, {100,55,33,0}, {8,89,65,11}};

    // output each array element's value
    for(int i =0; i < 3 ;++i){  // loop through rows
        for(int j =0; j < 4; j++){ // loop through colums
            cout <<"Element at x[" << i << "][" << j <<"]:";
            cout << x[i][j] <<endl;
        }
    }
    return 0;
}