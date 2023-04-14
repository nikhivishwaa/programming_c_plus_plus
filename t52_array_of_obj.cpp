    /* https://youtu.be/OCmCyYxSi2I */

#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
        void setdata(int a, float b){
            id = a;
            price = b;
        } 

        void getdata(){
            cout<<" Id is : "<<id<<endl;
            cout<<"Price is : "<<price<<endl;
        }
};
int main(){

    int size = 2;
    shop *ptr = new shop [size];
    shop *temptr = ptr;
    int p, q;

    for (size_t i = 0; i < size; i++)
    {
        cout<<"ID & Price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for (size_t j = 0; j < size; j++)
    {
        cout<<"Item no. "<<j+1<<endl;
        temptr->getdata();
        temptr++;

    }
    
        
    return 0;
}