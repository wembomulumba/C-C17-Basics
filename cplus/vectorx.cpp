//
//  vectorx.cpp
//  
//
//  Created by ABWEB SYSTEMS on 16/12/2018.
//

#include <vector>
#include <iostream>

using namespace std;

int main(){
    
    string data = "Welmcoe to eher app/n";

    std :: cout<< "" << data << endl;
    //define a vector of vectors
    vector<vector<int> > stuff;
    // fil the inner vector, then insert it into the outer vector
    for (int i = 0; i < 5; i++) {
        vector<int>temp;
        
        for(int j =0; j < 9; j++){
            temp.push_back(i);
        }
        stuff.push_back(temp);
    }
    
    // dispplay
    for(int i = 0; i < stuff.size(); i++){
        for(int j = 0; j < stuff[i].size(); j++){
            cout << stuff[i][j] << ' ';
        }
        cout <<endl;
    }
    
    return 0;
    
}
