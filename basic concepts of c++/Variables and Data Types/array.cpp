    /*  Array  */

#include<iostream>
using namespace std;

int main(){
    int marks[6] = {45, 46 , 47, 48, 49, 50};       // index starts with 0 to (n-1)
    int mathmarks[4];

    mathmarks[0] = 12;
    mathmarks[1] = 13;
    mathmarks[2] = 14;
    mathmarks[3] = 15;    
    
    // // array 1st
    // cout<<"these are marks : "<<endl<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;

    // marks[2] = 255;     // change the value of an array element

    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    // cout<<marks[5]<<endl<<endl;
    
    // // array 2nd
    // cout<<"These are mathmarks : "<<endl<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl<<endl;    
    
// *********|Create Aarray using for loop |*********

    
    cout<<"Via For loop : "<<endl<<endl;
    for(int i=0; i<6; i++)
    {
        cout<<marks[i]<<endl;
    }
    cout<<endl;

// *********|Create Aarray using while loop |*********

    int i=0;
    
    cout<<"Via while loop : "<<endl<<endl;
    while(i<6)
    {
        cout<<marks[i]<<endl;
        i++;
    }
    cout<<endl;

// *********|Create Aarray using do while loop |*********
    
    cout<<"Via do while loop : "<<endl<<endl;
    int j=0;
    do{
        cout<<marks[j]<<endl;
        j++;
    }while(i<6);

    cout<<endl;


    return 0;
}