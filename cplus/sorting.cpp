#include <iostream>


using namespace std;  

struct bitfield {
    
    unsigned int b1 : 1; // will use 1 bit
    unsigned int b2 : 1; // 1 bit
    unsigned int nibble : 4; // 4 bit
    unsigned int byte :   8; // 4 bit
    unsigned int b4 :   10; // 4 bit

} bf;

int main(){

    cout << sizeof(bf) << endl; // prints out 4
    return 0;
    //
 }