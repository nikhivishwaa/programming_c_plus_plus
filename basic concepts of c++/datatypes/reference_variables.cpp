#include<iostream>
using namespace std;

int c =45; // global variable

int main(){
/*  ******************| Built In Datatypes |*******************
    int a, b ,c;
    cout<<"enter the value of a : "<<endl;
    cin>>a;
    cout<<"enter the value of b : "<<endl;
    cin>>b;
    c = a + b;
    cout<<"the sum : "<<c<<endl;    // local variable
    cout<<"global var : "<<::c<<endl; // global variable
    // :: is a scope resolution operator
*/

    // by default fractional or decimal values is double
    float d=34.4f;  //--< f or F specifies float
    long double e=34.4l;    //--< l or L specifies long double
    cout<<"The value of d : "<<d<<endl<<"The value of e : "<<e<<endl;


/*    ******************| Literals |*******************

    //--> sizeof() keyword
    
    // cout<<"The value of 34.4 is : "<<sizeof(34.4)<<endl;
    // cout<<"The value of 34.4f is : "<<sizeof(34.4f)<<endl;
    // cout<<"The value of 34.4F is : "<<sizeof(34.4F)<<endl;
    // cout<<"The value of 34.4l is : "<<sizeof(34.4l)<<endl;
    // cout<<"The value of 34.4L is : "<<sizeof(34.4L)<<endl;
    // cout<<"The value of 34.4d is : "<<sizeof(34.4d)<<endl;
    // cout<<"The value of 34.4D is : "<<sizeof(34.4D)<<endl;
    
    */

/*  ******************| Rference Variables |*******************

    rohan Das ----> Monty ----> Ronu ----> khiladi

*/  float p = 455;
    float & y = p;  // y isa ref var
    cout<<p<<endl;
    cout<<y<<endl;
    
    return 0;
}