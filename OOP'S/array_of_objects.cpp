    /* Array of objects */

#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
        void setid(){
            salary = 122;       
            cout<<"Enter the id of Employee : "<<endl;
            cin>>id;
        }

        void getid(){
            cout<<"The id of Employee is "<<id<<endl;
        }
};
int main(){
    employee aryan, harry, ravi;
    // harry.setid();
    // harry.getid();
   
   employee fbcompany[4];      // array of objects
   for(int i=0; i<4; i++){
        fbcompany[i].setid();
        fbcompany[i].getid();
   }
    return 0;
}