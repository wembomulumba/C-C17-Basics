#include <iostream>

using namespace std;


int main() {

    int high_scores[3][5] = {
        {500,433,400,600,700}, {350,333,300,320,390},{850,833,800,720,990}

    };


// start looping over rows
for (int i = 0; i < 3 ; i ++){
    // now the rows
    for(int j=0; j < 5; j++) {
        cout <<"Player " << i << " Score #: " << j;
        cout <<" High Score=" << high_scores[i][j] <<endl;
    }
    cout<< "------------------------------" <<endl;
}

}