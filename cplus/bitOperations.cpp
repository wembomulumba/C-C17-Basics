#include <iostream>
#include <bitset>
#include <string>
#include <string>


using namespace std;

inline int even(const int value) {

    return ((value & 1) == 0 );
}

int main() {

   cout << even(23) << endl;

    return 0;

}