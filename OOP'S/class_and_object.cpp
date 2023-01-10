    /* class and object */

#include<iostream>
using namespace std;

class employee
{
    private:        // default visibility mode is private
        int a, b, c;
    public:
        int d, e;
        void setdata(int a1, int b1, int c1);  // Declaration

        // define function inside th class
        void getdata(){
            cout<<"The value of a : "<<a<<endl;
            cout<<"The value of b : "<<b<<endl;
            cout<<"The value of c : "<<c<<endl;
            cout<<"The value of d : "<<d<<endl;
            cout<<"The value of e : "<<e<<endl;
        }
};

// define function outside the class
// f()_return_type classname :: functionname(Arguments){   
    //:: is scope resolution operator
   // code
// }

void employee :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    // object is always declare inside the main f()
    employee harry;     //declaration of an object
    
   // harry.a = 53;       // this will thrown error as a is private
    harry.d = 24;
    harry.e = 35;
    harry.setdata(1,2,4);
    harry.getdata();
    return 0;
}