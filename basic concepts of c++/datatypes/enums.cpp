    /* enums inb c++ */

#include<iostream>

using namespace std;

// *********| Enums |*********

// it increase the redability of code

int main(){

    enum meal{ breakfast, lunch, dinner};   

    meal m1 = breakfast;

    cout<<"the index value of breakfast : "<<m1<<endl;
    cout<<(m1==0)<<endl;
    cout<<(m1==1)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;    
    return 0;
}