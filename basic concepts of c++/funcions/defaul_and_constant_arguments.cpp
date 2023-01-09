    /* default arguments in functions in c++ */

#include<iostream>
using namespace std;

// default arguments ---> it comes after the copulsory arguments

float si(int principal, int time, float rate=5.9){
    return (principal*time*rate)/100;
}

// constant arguments

// int strlen(const char *p){
// ----> copiler understand that do not change the value of p / treat as constant
// }

int main(){
    int p, t;
    float r;
    cout<<"Principal Amout : ";
    cin>>p;
    cout<<"Time : ";
    cin>>r;
    cout<<"Rate of Interest : ";
    cin>>t;
    cout<<"Simple Interest is : "<<si(p,t)<<endl;
    cout<<"Simple Interest is : "<<si(p,t,r)<<endl;

    return 0;
}