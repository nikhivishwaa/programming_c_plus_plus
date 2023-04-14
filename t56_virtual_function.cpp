    /* https://youtu.be/fB3JHNnlRfI */

#include<iostream>
using namespace std;

class base{
    public: 
        int var_base = 1;
        // void display(){
           
        virtual void display(){
            cout<<"The vale value of Var_base "<<var_base<<endl;
        }
};

class derive : public base{
    public: 
        int var_derive = 2;
        void display(){
            cout<<"The vale value of Var_base "<<var_base<<endl;
            cout<<"The vale value of Var_derive "<<var_derive<<endl;
        }
};

int main(){
    base * base_ptr;
    base base_obj;
    derive derive_obj;
    base_ptr = &derive_obj;
    base_ptr->display();

    // derive * derive_ptr;
    
    return 0;
}