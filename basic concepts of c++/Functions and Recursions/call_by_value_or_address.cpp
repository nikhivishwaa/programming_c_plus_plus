    /* call by value or call by address */

#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

//**********| call by value |***********

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// ************| call by address |*************

// call by reference using pointer reference

void swappointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


// call by reference using c++ reference variables 

// int & 
void referencevar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    // return a;
}

int main(){
    // cout<<"The sum of 4 and 5 is "<<sum(4, 5)<<endl;    
    int a=4, b=5;
    cout<<"The value of a : "<<a<<" and the value of b : "<<b<<endl;
    swap(a,b);   // This will not swap the value of a & b
    cout<<"The value of a : "<<a<<" and the value of b : "<<b<<endl;

    // swappointer(&a, &b);  // This will swap a & b usig pointer reference
    // cout<<"The value of a : "<<a<<" and the value of b : "<<b<<endl;
    referencevar(a, b);   // This will swap a & b using reference variable
    cout<<"The value of a : "<<a<<" and the value of b : "<<b<<endl;
   
    // referencevar(a, b) = 255;
    // cout<<a;

    return 0;
}