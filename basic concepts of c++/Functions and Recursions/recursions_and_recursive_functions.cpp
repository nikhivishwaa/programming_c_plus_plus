    /* Recursion and REcursive function in c++ */

#include<iostream>
using namespace std;

// step by step calculation of recursion of factorial

    // factorial(4) ---> 4 * factorial(3)
    // factorial(4) ---> 4 * 3 * factorial(2)
    // factorial(4) ---> 4 * 3 * 2 * factorial(1)
    // factorial(4) ---> 4 * 3 * 2 * 1

// recursion is a function in which the function is call itself.
int factorial(int x){
    if(x<=1){
        return 1;
    }
    return x * factorial(x-1);
}

// fibonacci series using recursive approach

// 1,1,2,3,5,8,,13
// 1+1 = 2      //   fibseries(5) = fibseries(4) + fibseries(3)
// 1+2 = 3      //   fibseries(5) = fibseries(4) + fibseries(3) + fibseries (2)
// 2+3 = 5      //   fibseries(5) = fibseries(4) + fibseries(3) + fibseries (2) + fibseries (1)
// 3+5 = 8

int fibseries(int x){
    if(x<2){
        return 1;
    }
    return fibseries(x-1) + fibseries(x-2);
}

int main(){
    // factorial of a number
    // 5! = 5*4*3*2*1
    //1! = 1 by defination
    //1! = 1 by defination
    //n! = n*(n-1) by defination

    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"The value is "<<a<<"! is : "<<factorial(a)<<endl;
    cout<<"The "<<a<<"th term of Fibonacci Series is : "<<fibseries(a)<<endl;

    return 0;
}