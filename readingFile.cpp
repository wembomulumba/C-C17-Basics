#include <fstream>
#include <iostream>

// C++ Program to read from a file containing numbers
// to the some of those numbers

using namespace std;

int main() {

   
   string line;
   ifstream myfile ("example3.txt"); // path of the file containing numbers
   int sum = 0;
   int totalb = 0;

   openin
      // check if the file is open
   if(myfile.is_open()){
       while (getline(myfile, line)){
           cout << line << ' ';

            // adding the numbers inside the file
           for(int i = 0; i <= line.length(); i++){
               sum = sum + atoi(line.c_str());
           }
           int b = atoi(line.c_str());
           for (int number = 0 ; number <= line.length(); number++){
               if(b % 2 != 0){
                       totalb = totalb + b;
                       
               }
           }
           cout<<"The total sum of odds numbers is :\n" <<totalb<<endl;
          
           cout<<"cout :\n" <<line.length()<<endl;
       }
       
       cout<<"The total sum of :\n" <<sum<<endl;
      
       
       
       myfile.close();
       

   }

  else cout <<"Unable to open file" <<endl;

  return 0;

}
