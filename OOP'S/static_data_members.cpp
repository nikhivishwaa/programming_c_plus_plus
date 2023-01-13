    /* Static data member and method */

#include<iostream>
using namespace std;

// **| All objects of a class share(used) same static variable |**

class employee{
    int id;
    // int count=0;
    static int count;  //define static var // it is known as class variables
    public:
        void setdata(){
            cout<<"Enter the id : "<<endl;
            cin>>id;
            count++;  // it takes memory only once and after this its updates only
        }
        void getdata(){
            cout<<"The id of this Emloyee is : "<<id<<endl;
            cout<<"This is Employee no. "<<count<<endl;
        }
            // static member function
        static void getcount(){
            // it access the static variables(datamembers) & static member f()
            // it doesnot access the variables or normal function
                
                cout<<"The value of count is : "<<count<<endl;

                // cout<<"The value of id is : "<<id<<endl; // throws error
        }
};

// static variable is written outside the class
//int employee::count;    // default value is 0

// count is static datamember of class employee
int employee::count=1000; // initialize with 1000

int main(){
     employee harry, rohan, mohan;
    // harry.id = 1234;         // we cant change private members
    // harry.count = 9876;


    harry.setdata();
    harry.getdata();
    employee::getcount();


    rohan.setdata();
    rohan.getdata();
    employee::getcount();

    mohan.setdata();
    mohan.getdata();
    employee::getcount();
    return 0;
}