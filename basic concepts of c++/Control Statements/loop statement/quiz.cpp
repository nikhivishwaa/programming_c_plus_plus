        // write a program to print the multiplication table of 6 usin while loop.

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int i=1, n=6;
    cout<<"\n\n\tThe Multiplication table of 6 :-"<<endl<<endl;

    do{
        cout<<"\t\t\t"<<n<<" x "<<setw(2)<<i<<" = "<<setw(2)<<n*i<<endl;
        i++;
    }while(i<=10);
    return 0;
}