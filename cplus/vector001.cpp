#include <iostream>
#include <vector>

using namespace std;

int main() {

    std :: vector <int> array;
    int i = 999; // some integer value
    array.reserve(10);
    array.push_back(i); // the first value inserted
    array.push_back(20);

    std :: cout << array.capacity() << endl;
    std :: cout << array.size() <<endl; // how many elements inside the array

    

}