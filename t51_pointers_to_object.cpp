    /* Pointer to objecct */

#include<iostream>
using namespace std;

class Comp{
    int real, imaginary;
    public:
        void getdata(){
            cout<<"The real part is : "<<real<<endl;
            cout<<"The Imaginary Part is : "<<imaginary<<endl;
        }

        void setdata(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    Comp c1;
    // Comp *ptr = &c1;
    Comp *ptr = new Comp;
    c1.setdata(1,6);
    c1.getdata();
    // (*ptr).setdata(9,6); // is same as 
    ptr->setdata(9,6);  // arrow operator
    (*ptr).getdata();

    // array of objects

    Comp *ptr1 = new Comp[4];
    ptr1->setdata(5,6);
    ptr1->getdata();

    return 0;
}