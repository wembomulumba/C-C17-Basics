// includes inside our project ressources and components
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include "local.h" // including external file c or C++
// including c libraries
#include <cstdio>
#include <cstdlib> 


using namespace std;  // standard library mostly used for input/output

// defining the function that you are to use


// main class to execute the program
int main(int argc, char *argv[]) {

    printf("Hello here i Program...");

    char *x;
    char *qoatient;

    x = argv[1];
    qoatient = argv[2];
    
    int y = stoi(x);
    int z = stoi(qoatient);

    if (y == 0 ) {

        printf("We can not process this operation....");
        
    } 
    else {
         printf("the result of our inputs:   %d \n",y * z);
         cout << "Acceleration : " << y * 2 <<endl;

    }

   
   

}

