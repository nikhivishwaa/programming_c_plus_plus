    /* struct in c++ */

#include<iostream>
using namespace std;


// *********| Struct |*********

//  struct is a collection of different datatype entities


typedef struct employee
{
    /* data */
    int eid;   // 2 byte
    char favChar;   // 1 byte ----> total memory alloction >-- 7 bytes
    float salary;   // 4 byte
} ep;  //   space is mendatory

// struct employee
// {
//     /* data */
//     int eid;
//     char favChar;
//     float salary;
// };


int main(){

    ep harry;
    ep geeta;
    ep shubham;


    // struct employee harry;
    // struct employee geeta;
    // struct employee shubham;

    harry.eid = 1;
    harry.favChar = 'c';
    harry.salary = 12000000;

    cout<<"The value is "<<harry.eid<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl;

    return 0;
}