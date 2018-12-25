#include <fstream>
#include <iostream>

using namespace std;

int main() {

    char data[100];

    // open a file in write mode

    ofstream outfile;
    outfile.open("afile.dat");

    cout <<"Writting to the file" <<endl;
    cout << "enter your name" <<endl;

    cin.getline(data, 100);

    // write inputter data into the file

    outfile << data <<endl;

    cout <<"Enter your age: ";
    cin >> data;

    cin.ignore();

    //again write initter data into the file.

    outfile << data << endl;

    outfile.close();

    // open a file in read mode
    ifstream infile;
    infile.open("afile.dat");

    cout <<"reading from the file" <<endl;
    infile >> data;

    // writethe data at the screen
    cout << data << endl;

    // again read the data frm the file and display it.
    infile >> data;
    cout << data <<endl;
    // close the opened file.
    infile.close();
    return 0;
}