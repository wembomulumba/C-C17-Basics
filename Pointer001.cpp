// a Program to convert in integer to a Pointer to an Interfer and vice-versa

#include <iostream>
#include <stdio.h>
#include<sys/posix_sem.h>
#include <sys/posix_shm.h>
using namespace std;

int main() {
   int x = 25;
   int y = 5;
   int* q = &y;
   int* p = &x;
   cout << p  << ' ' << x <<endl;
   cout << q  << ' '  << y + *p <<endl;
    return 0;
}
