

#include<iostream>


using namespace std;

int main(){
    int a=4, b=6;
    cout<<"Operators in c++"<<endl; // end the current line 
    
    cout<<"Following are the types of Operators in c++"<<endl; 

    //--> 1. arithmetic operators
    cout<<"the value of a+b : "<<a+b<<endl;  // addition
    cout<<"the value of a-b : "<<a-b<<endl;  // substraction
    cout<<"the value of a*b : "<<a*b<<endl;  // multiplication
    cout<<"the value of a/b : "<<a/b<<endl;  // division
    cout<<"the value of a%b : "<<a%b<<endl;  // remainder
    cout<<endl;

    //--> 2. increment & dexcrement operator
    
    
    // post --> increment/ decrement
    cout<<"the value of a++ : "<<a++<<endl; // a=4
    cout<<"the value of a-- : "<<a--<<endl; // a=5-1
    
    // pre --> increment/ decrement
    cout<<"the value of ++a : "<<++a<<endl; // a=4+1
    cout<<"the value of --b : "<<--a<<endl; // a=5-1
    cout<<endl;


    //--> 3. assignment operators
    /*
    int c=3; x=9;
    char name='d';      // used to assign values to variables
    */

    //--> 4. compasrison operators
    cout<<"The Comparison operators are as following :"<<endl;
    cout<<"the value a==b is "<<(a==b)<<endl;       // it returns (0 or 1)
    cout<<"the value a>=b is "<<(a>=b)<<endl;       // it returns (0 or 1)
    cout<<"the value a<=b is "<<(a<=b)<<endl;       // it returns (0 or 1)       
    cout<<"the value a>b is "<<(a>b)<<endl;     // it returns (0 or 1)
    cout<<"the value a<b is "<<(a<b)<<endl;     // it returns (0 or 1)
    cout<<"the value a!=b is "<<(a!=b)<<endl;       // it returns (0 or 1)
    cout<<endl;


    //--> 5. logical operators
    cout<<"The Logical operators are as following :"<<endl;
    cout<<"The value of logical and operator ((a>b) && (a==b)) : "<<((a>b) && (a==b))<<endl;
    cout<<"The value of logical or operator ((a<b) || (a==b)) : "<<((a<b) || (a==b))<<endl;
    cout<<"The value of logical not opoerator (!(a>b)) : "<<(!(a>b))<<endl;
    
    // bitwise operators

    return 1;
}