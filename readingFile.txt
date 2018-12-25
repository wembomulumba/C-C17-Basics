#include <fstream>
#include <iostream>

using namespace std;

int main() {

    ofstream file; // delcare the file
    file.open("example.txt");
    file <<"Another text added here....dhfjsdhf sdfhsdfghsdf sdgfhgshdfsd fsdfghsgdfhsdf";
    file.close();

    return 0;




}