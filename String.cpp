#include <iostream>
#include <vector>
#include <string>
#include <fstream>



using namespace std;

int main() {

    char happyArray[4] = {'h','a','p','y'};

    string birthdayString = "BirthDay";

    cout << happyArray + birthdayString <<endl;

    string yourName ;

    cout << "Whqt i you nae/n";

    getline(cin, yourName);

    cout <<"hello" << yourName <<endl;


    return 0;

}
