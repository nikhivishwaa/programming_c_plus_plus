    /* Parameterized Constructor in c++ */

#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(int, int); // constructor declaration
        void printdata(){
            cout<<"Your  Number is "<<a<<" + "<<b<<endl;
        }

};

    // definition of Constructor

Complex::Complex(int x, int y){  
    //   --> This is a Parameterized constructor
   
    a = x;
    b = y;
  //  cout<<"Hello World!"<<endl;
}

int main(){

    // Implicit Call
    Complex a(4, 6);
    a.printdata();

    // Explicit Call
    Complex b = Complex(5, 8);
    b.printdata();
    return 0;
}
