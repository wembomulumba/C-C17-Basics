#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <math.h>


using namespace std;

int getFactorial (int number){

    int sum;
    if(number == 1) sum =1;
    else sum = getFactorial(number -1) * number;
    return sum;
}


int main() {

    cout <<"Welcome to the Factorial Program: /n" <<endl;
    cout <<"please enter the number: /n" <<endl;
    int b;
    cin>>b;
    cout <<"Here the result of factorial number  : " << getFactorial(b) << endl;



}