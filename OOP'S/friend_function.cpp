    /* Friend Function in c++ */

#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        // friend function
        friend Complex sumComplex(Complex o1, Complex o2);
        void printNumber(){
            cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
        }
        
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1,5);
    c1.printNumber();
    c2.setNumber(2,4);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    
    return 0;
}


    /*  Properties of Friend Function :

     1.--> Not in the Scope of Class
     2.--> Since it is not in the Scope of the Class, it cannot be called from 
            the objectof that class.    c1.sumComplex() == invalid!
     3.--> Can be invoked without the help of any object
     4.--> Ussually contains the object as Argument
     5.--> Can be declared inside public or private section of the class
     6.--> It cannot access the members  directly by theiur names And need 
            object_name.member_name to access any member
    
    
    */