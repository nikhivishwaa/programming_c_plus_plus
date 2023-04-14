    /* */

#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int* ptr = &a;

    // cout<<"The address of a is "<<ptr<<endl;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // new Operator (Keyword)
    // int *p = new int(40); 
    float *p = new float(40.20); 
    cout<<"The value at address p is "<<*(p)<<endl;
    delete p;
    cout<<"The value at address p is after free "<<*(p)<<endl;

    int *arr = new int[3];  //---> it allocate memory dynemically
    arr[0] = 10;
    // arr[1] = 20;
    *(arr+1) = 20;
    arr[2] = 30;
    // delete[] arr;    ---> it free the dynamically allocated memory
    // delete arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    // delete Operator (Keyword)


    return 0;
}