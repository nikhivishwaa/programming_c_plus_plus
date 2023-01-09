#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"If-else if ledder statement"<<endl<<endl;
    cout<<"Enter your age : ";
    cin>>age;
    if(age<18){
        cout<<"You are not allowed in the party"<<endl;
    }
    else if(age==18){
        cout<<"You need to kid pass for the party"<<endl;
    }
    else{
        cout<<"You are welcome to party"<<endl;
    }
    return 0;
}