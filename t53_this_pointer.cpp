    /* https://youtu.be/cEOfK_L4gGA */

#include<iostream>
using namespace std;
class A{
    int a;
    public:
      A & setdata(int a){

        // void setdata(int a){
            // a = a;
            this->a = a;
            return *this;
        }
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){

    // This is a keyword which is a
    // pointer which points to a the object which invokes 
    // the member function

    A a;
    
    a.setdata(5).getdata();

    a.setdata(4);

    a.getdata();

    return 0;
}