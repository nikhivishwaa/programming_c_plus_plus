    /* functions prototyping in c++ */

#include<iostream>
using namespace std;

// Function prototype
// type funtion-name (arguments);

// int sum(int a, int b);  //--> Accectable
// int sum(int a, b);  //--> Not Accectable

int sum(int, int);  //--> Accectable
void g(void);  //--> Accectable
void g();  //--> Accectable


int main(){
    int num1, num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"The sum is : "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b){
    /* Formal parameters--> (a & b) will be taking values from 
    Actual parameters--> (num1 & num2)   */
    int c = a+b;
    return c;
}

    // return is not mendatory in all functions

void g(){
    cout<<"\nProcess complete."<<endl;
} 