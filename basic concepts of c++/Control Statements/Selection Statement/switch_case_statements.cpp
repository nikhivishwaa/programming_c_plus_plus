#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Switch case statement"<<endl<<endl;
    cout<<"Enter your age : ";
    cin>>age;
    switch(age){
        case 2:
            cout<<"You are not allowed in the party"<<endl;
            break;

        case 18:
            cout<<"You need to kid pass for the party"<<endl;
            break;

        case 22:
            cout<<"You are welcome to party"<<endl;
            break;
        
        default:
            cout<<"No more cases are available"<<endl;
    }
    
    return 0;
}