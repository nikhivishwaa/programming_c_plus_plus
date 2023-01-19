    /* Copy Constructor in c++ */

#include<iostream>
using namespace std;

class Number
{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }

        Number(Number &obj){
            cout<<"Copy constructor Called !!"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main(){
    Number x, y, z(100), z2;
    z.display();

    Number z1(z);   // copy constructor invoked
    z1.display();

    z2 = z;   // copy constructor not called
    z2.display();

    Number z3 =z;   // copy constructor invoked
    z3.display();



    // zq should exactly resemble  z or x or y
    return 0;
}