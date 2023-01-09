#include<iostream>
#include<iomanip>      // header file which have setw() manipulator
using namespace std;

int main(){
    /*
    int a=34;
    cout<<"the value of a was : "<<a<<endl;
    a = 45;
    cout<<"the value of a was : "<<a<<endl;
    */

//   ******************| constants in c++ |*******************

    // const int a=34;     // the value of a never be changed or modified
    // cout<<"the value of a was : "<<a<<endl;
    // a = 45;
    // cout<<"the value of a was : "<<a<<endl;

//   ******************| Manipulators in c++ |*******************
    
    //--> setw() keyword
    
    int a=5, b=10, c=1234;
    cout<<"\nThe value of a without setw : "<<a<<endl;
    cout<<"The value of b without setw : "<<b<<endl;
    cout<<"The value of c without setw : "<<c<<endl;

    // setw() sifts the values rihgt
    cout<<"The value of a without setw : "<<setw(4)<<a<<endl;
    cout<<"The value of b without setw : "<<setw(4)<<b<<endl;
    cout<<"The value of c without setw : "<<setw(4)<<c<<endl;

    return 0;
}