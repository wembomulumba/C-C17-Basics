#include <iostream>
#include <string>

using namespace std;


int main() {

    int x[3][4] = {{10,9,74,6}, {0,8,55,6}, {20,100,5,6}}; // an array of 3 rows and 2 columns

    // out each array elements's value

    for (int i = 0 ; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << "Elements at x[" << i << "][" << j << "]: ";
            cout << x[i][j] <<endl;
        }
    }
}