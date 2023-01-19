    /* Easy example of Friend Function() */

#include<iostream>
using namespace std;

class Y;

class X
{
    int data;
    public:
        void setdata(int a){
            data = a;
        }
        friend void add(X,Y);
};

class Y
{
    int data;
    public:
        void setdata(int b){
            data = b;
        }
        friend void add(X,Y);
};

void add(X a1, Y b1){
    cout<<"The sum of "<<a1.data<<" and "<<b1.data<<" is "<<a1.data+b1.data<<endl;
}
int main(){
    X a;
    a.setdata(5);
    Y b;
    b.setdata(34);
    add(a,b);
    return 0;
}