    /* https://youtu.be/0YQ_yhX46uk */

#include<iostream>
using namespace std;

class base{
    public: 
        int var_base;
        void display(){
            cout<<"The vale value of Var_base "<<var_base<<endl;
        }
};

class derive : public base{
    public: 
        int var_derive;
        void display(){
            cout<<"The vale value of Var_base "<<var_base<<endl;
            cout<<"The vale value of Var_derive "<<var_derive<<endl;
        }
};

int main(){
    base * base_ptr;
    base obj_base;
    derive obj_derive; 
    base_ptr = &obj_derive; // pointing  base class pointer to derive class

   //  base_ptr->var_derive = 1325;    // throughs error
    base_ptr->var_base = 34;
    base_ptr->display();
    
    derive * derive_ptr;
    derive_ptr = &obj_derive;
    derive_ptr->var_derive = 56;
    derive_ptr->var_base = 15;
    derive_ptr->display();
    return 0;
}