#include<iostream>
using namespace std;

int main(){


    // do
    // {
    //     loop body(c++ code);
    //     updation;
    // }while(condition);
    
    int i=0;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=10);


    do{
        cout<<"\nin do while loop the loop is running once even if the condition is false"<<endl;
        cout<<i<<endl;
        i++;
    }while(false);

    // infinite loop

    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(true);
    
    return 0;
}