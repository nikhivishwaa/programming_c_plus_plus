    /* */

#include<iostream>
#include<string>        // header file for string
using namespace std;

//  functions of string

// s.length();     // length of string
// s.at(index);    // value of string on particular index

int main(){
    string name;
    cout<<"enter your name : ";
    cin>>name;
    cout<<"Welcome "<<name<<endl;
    cout<<"Your name contains "<<name.length()<<" characters"<<endl;
    cout<<"5th character is  "<<name.at(5)<<" characters"<<endl;    //index-- from 0
    return 0;
}