    /* Function overloading */

#include<iostream>
using namespace std;

// **********| Function overloading is used to  create   |***********
// **********| same named f() for different argument     |***********
// **********| and Task                                  |***********

int sum(int a, int b){
    cout<<"Using 2 argument function"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using 3 argument function"<<endl;
    return a+b+c;
}

// calculate the volume of cylinder
float volume(float r, float h){
    return (3.14*r*r*h);
}

// calculate the volume of cube
float volume(float a){
    return (a*a*a);
}

// calculate the volume of sphere
// float volume(float r){       // same arguments functions are thrown error
//     return ((4*3.14*r*r*r)/3);
// }

int main(){
    int x=2, y=4,z=9;
    cout<<"The sum of x & y : "<<sum(x,y)<<endl;
    cout<<"The sum of x, y & z : "<<sum(x,y,z)<<endl;
    cout<<"The volume of sphere : "<<volume(7)<<endl;
    cout<<"The volume of cylinder : "<<volume(7,10)<<endl;
    cout<<"The volume of cube : "<<volume(4)<<endl;
    return 0;
}