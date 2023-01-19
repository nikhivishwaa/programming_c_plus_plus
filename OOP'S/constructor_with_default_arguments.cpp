    /* Constructor wit default Arguments in c++ */

#include<iostream>
using namespace std;

class Simple{
    int data1, data2, data3;
    public:
        Simple(int a, int b=9, int c=12){     // default value
            data1 = a;
            data2 = b; 
            data3 = c;
        }

        void printdata(){
            cout<<"The value of data is "<<data1<<", "<<data2<<" and "<<data3<<endl;
        }
};

int main(){
    // Simple s(3,6,87);
    Simple s(1);
    s.printdata();
    return 0;
}