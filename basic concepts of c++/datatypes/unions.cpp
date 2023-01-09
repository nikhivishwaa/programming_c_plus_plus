    /* Unions in c++ */

#include<iostream>
using namespace std;

// *********| Unions |*********

// shared memory // bcz of we use only one datatype

union money {
    /* data */
    int rice;   // 2 byte
    char carname;   // 1 byte ----> total memory alloction >-- 4 bytes
    float pound;   // 4 byte
}; 

int main(){

    union money m1;
    m1.rice = 34;
    m1.carname = 'b'; // use only once datatype at a time
    m1.pound = 33.9;

    cout<<"The value is "<<m1.pound<<endl;   
    return 0;
}