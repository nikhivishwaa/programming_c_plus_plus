#include<iostream>
using namespace std;

int main(){

    // ******************| Type Casting |*******************
    int a=45;
    float b=49.089;
    cout<<"The value of a is  : "<<a<<endl;
    cout<<"The value of a is  : "<<(float)a<<endl; // type casting
    cout<<"The value of a is  : "<<float(a)<<endl;

    
    cout<<"\nThe value of b is  : "<<b<<endl;
    cout<<"The value of b is  : "<<(int)b<<endl;
    cout<<"The value of b is  : "<<int(b)<<endl;

    int c = int(b);
    

    cout<<"\nThe expression is  : "<<a + b<<endl;
    cout<<"The expression is  : "<<a + (int)b<<endl;
    cout<<"The expression is  : "<<a + int(b)<<endl;
    
    return 0;
}