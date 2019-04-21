#include <iostream>
#include <fstream>

using namespace std;

int main() {

    const int NUM_EMPLOYEES = 25;
    int hours[NUM_EMPLOYEES]; // hold hours worked for 6 employees

    int count;
    int numberofEmployees;

    ifstream inputFile;
    inputFile.open("example.txt");

    if (!inputFile){
        cout <<"Error finding the file" << endl;
        exit(-1);
    }

    count = 0;
    while (!inputFile.eof()){
        inputFile >> hours[count];
        count++;
    }
    numberofEmployees = count;

    // Display the content fof the array
    for(count = 0 ; count < NUM_EMPLOYEES; count++)
        cout <<" " << hours[count];
    cout << endl;
    return 0;    
}