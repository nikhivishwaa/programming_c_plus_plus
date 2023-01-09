    /* */

#include<iostream>
using namespace std;

int main(){

    int marks[6] = {45, 46 , 47, 48, 49, 50};

    /*****************| pointer and arrays |**************/

    // pointer Arithmetic :

    //     --->  addres--new = address--current + i* sizeof(datatype) 

    //marks ---> address of first block
    // &marks is wrong

    int* p = marks;
    cout<<"*p++ : "<<*p++<<endl;
    cout<<"*p++ : "<<*p++<<endl;
    cout<<"*(++p) : "<<*(++p)<<endl;

    // cout<<"The value of *p : "<<*p<<endl;
    // cout<<"The value of *(p+1) : "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) : "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) : "<<*(p+3)<<endl;
    // cout<<"The value of *(p+4) : "<<*(p+4)<<endl;
    // cout<<"The value of *(p+5) : "<<*(p+5)<<endl;


    return 0;
}