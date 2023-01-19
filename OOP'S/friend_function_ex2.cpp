    /*  Tough example of Friend Function()  */

#include<iostream>
using namespace std;

class c2;

class c1
{
    int data;
    public:
        void setdata(int a){
            data = a;
        }
        void display(){
            cout<<"a = "<<data<<endl;
        }
        friend void exchange(c1 &, c2 &);
};

class c2
{
    int data1;
    public:
        void setdata(int a){
            data1 = a;
        }
        void display(){
            cout<<"b = "<<data1<<endl;
        }
        friend void exchange(c1 &, c2 &);
};

void exchange(c1 & a, c2 & b){
    int temp = a.data;
    a.data = b.data1;
    b.data1 = temp;
   // cout<<"After Exchange :-\n"<<"a = "<<a.data<<endl<<"b = "<<b1.data<<endl;

}

int main(){
    c1 x;
    c2 y;
    x.setdata(34);
    y.setdata(67);
    cout<<"Before Exchange : "<<endl;
    x.display();
    y.display();
    exchange(x,y);
    x.display();
    y.display();
    return 0;
}