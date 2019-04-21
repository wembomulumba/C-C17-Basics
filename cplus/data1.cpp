// outputs addresses and values

#include <iostream>

using namespace std;
int arr[4] = {0,10,20, 30};

int main() {

    cout << "\nAddresses and values of array elements :\n" <<endl;
    
    for(int i =0; i < 4 ; i++){
        cout <<"Address : " << (void*) (arr + i)
             << " Value: " << *(arr + i)
             <<endl;
    }
    return 0;
}