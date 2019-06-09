#include <vector>
#include <iostream>

using namespace std;

int main() {

    std :: vector<double> a;
    std :: vector<double> :: const_iterator i;

    a.push_back(1);
    a.push_back(2);
    a.push_back(7);
    a.push_back(4);
    a.push_back(15);

    for (i = a.begin(); i!=a.end(); i++){
        cout <<(*i) << '\n' << std :: endl;
    }
}