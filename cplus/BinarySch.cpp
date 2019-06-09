/* C++ Porgram to implement Binary Searc */

#include <iostream>
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int  main() {

    int n, i , arr[50], search, first, last , middle;
    cout << "Enter total number of elements: " <<endl;
    cin >> n;

    cout <<"Enter "<<n<<" Numbber : ";
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout <<"Enter a number to find : ";
    cin >>search;
    first = 0;
    last = n -1;

    middle = (first + last) / 2;

    while (first <= last){
        if(arr[middle] < search){
            first = middle +1;

        }
        else if (arr[middle] == search){
            cout << search << "found at location " << middle +1 <<endl;
        } 
        else {
            last = middle -1;
        }
        middle = (first + last) / 2;

    }
    if (first > last) {
        cout <<"Not found !" <<search <<"is not present in the list.";
    }
    

    return 0;

}