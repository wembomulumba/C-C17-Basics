#include <iostream> // ca ca m aide a dire a la machine, done moi et recois les informations
#include <string>  // montre en caractere
#include <vector>
#include <math.h>

using namespace std;


// commence le prgram
int main() {

    cout <<"Bienvenu Ornella au Program de math : " << endl;
    double x;
    double y;

    cout <<"Entre le premier nombre :" << endl;

    cin >> x;

    cout <<"enter le deuxinement numbre :" << endl;

    cin >> y;

   

    
    
     cout << "le resultat de l'addition : " << x + y << endl;

    if (x + y / 2 <= 50 ){
        cout <<"Eleeve a echourer la premiere session :" <<endl;
    }
    if  (x + y /2 >=70) {

        cout <<"eleve a reussi avec honneur : " <<endl;

    }
    else {
        cout <<" a passer de classe seulement" << endl;
    }


   






    return 0;
}

