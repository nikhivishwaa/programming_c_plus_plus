#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Harry bhai check";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    out<<st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // Read operation
    in>>st2;
    // getline(in, st2);  // read line by line
    cout<<st2;


    return 0;
}
