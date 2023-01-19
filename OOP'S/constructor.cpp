    /* Constructor in c++ */

#include<iostream>
using namespace std;

class Complex{
    // creating a constructor
    // Constructor is a special member function with same name as of the class.
    //  It is used to initialize the objects of its class. 
    // It is Automatically invoked(called) whenever an Object is created.
    int a, b;
    public:
        Complex(void); // constructor declaration
        void printdata(){
            cout<<"Your  Number is "<<a<<" + "<<b<<endl;
        }

};

    // definition of Constructor
Complex::Complex(void){  //   --> This is a default constructor as it takes no perameters
    a = 10;
    b = 12;
  //  cout<<"Hello World!"<<endl;
}

int main(){
    Complex c1, c2, c3;
    c1.printdata();
    c2.printdata();
    c3.printdata();
    return 0;
}

    /* Characterstics of Constructors :

     1. It should be declared in the public section of the class.
     2. They are automatically invoked whenever the object is created.
     3. They cannot return values And do not have any return type.
     4. It can have default arguments.
     5. We canniot refer to their address.

    */