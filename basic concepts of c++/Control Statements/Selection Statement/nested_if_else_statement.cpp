#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Nested if-else statement"<<endl<<endl;
    cout<<"Enter your age : ";
    cin>>age;
    if(age<=18){
        if(age==18){
            cout<<"You need to kid pass for the party"<<endl;
        }
        else{
            cout<<"You are not allowed in the party"<<endl;
        }
    }
    else{
        cout<<"You are welcome to party"<<endl;
    }
    return 0;
}