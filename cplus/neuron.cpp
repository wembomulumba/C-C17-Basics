#ifndef _NEURON_HPP_
#define _NEURON_HPP_

#include <iostream>

using namespace std;

class Neuron {
       


      public :  


        Neuron(double val);
        
        // fast Sigmoid Function
        // f(x) = x / (1 + x)
        void activate();

        //Derivatrice for fast sigmoid function
        // f'(x) = f(x) * (1 - f(x))
        void derive();


        double getVal() {
            return this ->val;
        }
        double getActivatedVal() {   return this -> activatedVal;    }
        double getDerivedVal() {     return this -> derivedVal;    }


      //0-1  
      private :
        // 1.5
        double val;

        //0-1
        double activatedVal;


        double derivedVal;
};

#endif


