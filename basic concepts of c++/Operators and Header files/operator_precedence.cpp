#include<iostream>
using namespace std;

int main(){

    // ******************| Opeartor precedene & Associativity |*******************

    // https://en.cppreference.com/w/cpp/language/operator_precedence

    int a=5, b=9, c;
    // c = (a*b)+5;
    c = ((((a*b)+45)-45)+46);
    cout<<"The value of c : "<<c<<endl;    
    return 0;
}