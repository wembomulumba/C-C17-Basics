#include <iostream> 
#include <iomanip>
#include <cmath> 

using namespace std;
int main() {
  int i=20;
  cout << "i = " << i << " (default)\n" ;
  cout << hex << "i = " << i << " (hex)\n";
  double d = sqrt(7.0);
  cout << "d=sqrt(7.0)=" << d << endl;
  cout.precision(3);
  cout << "After cout.precision(3), d=" << d << endl;
return 0; }