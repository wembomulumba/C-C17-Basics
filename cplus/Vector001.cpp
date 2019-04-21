#include <vector>
#include <iostream>

using namespace std;

int main () {
    vector<int> A (4,0); // A : 0 0 0 0
    A.resize(8,2);
    vector <int> B (3,1);
    for (int i = 0; i < B.size(); ++i){
        A[i] = B[i] + 2;
        cout << A <<endl;
    }
    A = B;
    return 0;
 }