#include <iostream>

#include <vector>
#include <math.h>

using namespace std;

double mean(double *array, size_t n){
    
    double m=0;
    for(size_t i = 0; i < n; ++i){
        m += array[i];

    }
    return m/n;
}

int main() {

    std :: vector<double> a;

    a.push_back(1);
    a.push_back(2);
    a.push_back(7);
    a.push_back(4);
    a.push_back(15);

    std :: cout << mean(&a[0], 5) <<std :: endl;
    return 0;

}