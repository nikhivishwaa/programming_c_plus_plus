    /* passing object as function argument */

#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
        void setdata(int v1, int v2){
            a=v1;
            b=v2;
        }
            // passing object as function argument

        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;      // access the o1 & o2 object's a var
            b = o1.b + o2.b;
        }
        void printNumber(){
            cout<<"Your Complesx no. is "<<a<<" + "<<b<<"i"<<endl;
        }

};

int main(){
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c2.setdata(3, 4);
    c3.setdata(5, 6);

    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    
    return 0;
}