    /* */

#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> data type which holds the address of other data types

    int a=3;
    int* b = &a;
  //  int* b; b = &a;        // *b is a pointer variable

    // & ---> (Address of) operator

    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The address of a is : "<<b<<endl;

    // * ---> (value at address) Dereference operator

    cout<<"The value of address at b is : "<<*b<<endl;  

    // pointer to pointer  

    int** c = &b;
    cout<<"The Address of b is : "<<&b<<endl;    
    cout<<"The Address of b is : "<<c<<endl;    
    cout<<"The value at Address c is : "<<*c<<endl;    
    cout<<"The value at Address value_at(value_at(c) is : "<<**c<<endl;    



    return 0;
}