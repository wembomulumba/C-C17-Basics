#include <iostream>
#include <vector>
#include <string>
#include <fstream>



using namespace std;

int main() {

    string numberofGuessed;

    int intNumberGuessed = 0;

    do {
        cout << "Guess A Number between 1 and 10 : ";
        getline(cin , numberofGuessed);

        intNumberGuessed = stoi(numberofGuessed);
        cout <<intNumberGuessed <<endl;


    } while (intNumberGuessed !=4 );

    cout <<"you won !" <<endl;

    //system('pause');
    return 0;
}
