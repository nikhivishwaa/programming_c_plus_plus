#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream chek("someone.txt");

    chek<<"you are a good boy\n\n\t*\n\t**\n\t***\n\t****\n\t***\n\t**\n\t*\n\nso what";

    chek.close();

    ifstream cook;
    string ct, file;
    cook.open("someone.txt");
    cook>>ct;
    cout<<ct;
    while(cook.eof()==0){
    getline(cook, file);
    cout<<file<<endl;
    }
    return 0;
}