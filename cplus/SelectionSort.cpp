// C++ Program Demonstrating Selection Sort Algorithm
//Author : Wembo Mulumba Otepa
// email : wembo.mulumba@abwebsystems.com


#include <iostream>


using namespace std ;

// function for selection sort
void seltSort (int a[] , int n){
    for(int i = 0; i < n -1 ; i++){

        // assume the current (ith) is min

        int minIndex = i;
        // Min element in rem part

        for(int j = i +1; j < n; j++){
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        }
        swap(a[minIndex], a[i]);

    }
}

int main() {

    int x[] = {15,8,7,9,88};
    int n = 5;
    seltSort (x, n);
    for (int i =0; i < 5 ; i++){
        cout << x[i] << " " <<endl;
    }

    return 0;


}