// A array of elements
    // n size of the array // numbers of elements
    // e - elements to be searched 

    // Return value/ output
    // not found : -1

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int BinarySearch(int A[], int n, int e){

    int start, end, mid;
    start = 0;
    end = n-1;

    while (start <= end) {

        mid = (start +end) /2;
        if(A[mid] == e)
            return mid;
        else if (e > A[mid])
       
            start = mid + 1;
       else if(e < A[mid]) 
            end = mid -1;
          
    }
    return true;
}



int main () {

    int A[] =  {34,34,66,77,88,99};

    cout <<BinarySearch(A, 6, 77) <<endl;
}

