    /* inline function in c++ */

#include<iostream>
using namespace std;

// when the function process is line none so we use the inline function
// it doesn't use in recursion & with sattic variable
inline int product(int a, int b){
    return a*b;
}


// int product(int a, int b){
//     // Not recommend to use below lines with inline function
//     static int c=0; //this executes only once
//     c = c+1; // Next time function is run, the value of c will be retained
//     return a*b+c;
// }


int main(){
    int a, b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product(a,b)<<endl;

    return 0;
}