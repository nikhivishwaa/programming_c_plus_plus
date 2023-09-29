#include<iostream>
#include<stdio.h>
using namespace std;


class Auth{
    int id = 1234;
    string password = "admin";
    public:
        Auth(int id, string pswd){
            id = id;
            password = pswd;
        }
        bool login(Auth u1){
            if(id == u1.id && password == u1.password)return true;
        }
        bool logout(){
            return false;
        }
};

class Product{
    string name;
    string description;
    double price;
    int quantity;
    public:
        int prnum;
        static int count;
        static int removed;
        Product(){}
        void product(string n, string d, double p, int q){
            name = n;
            description = d;
            price = p;
            quantity = q;
            count += 1;
            prnum = count;
        }
        void rename(string n){name = n;}
        void updateDescription(string d){description = d;}
        void updatePrice(double p){price = p;}
        void updateQty(int q){quantity += q;}
        void displaySummary(){
            cout<<"Name : "<<name<<" Qty : "<<quantity<<endl;
        }
        void delProduct(){
            name = "dlt";
            removed += 1;
            count -= 1;
        }
        void displayProduct(){
            cout<<"--------------------"<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Description : "<<description<<endl;
            cout<<"Price : "<<price<<" Rupee/-"<<endl;
            cout<<"Qty : "<<quantity<<endl;
            cout<<"Product no. : "<<prnum<<endl;
        }
        int searchProduct(string n){
            bool r;
            for(int i=0; n[i]!=NULL; i++){
                r = false;
                if(name[i] == n[i])r = true;
                else break;
            }
            if(r){
                return prnum;
                }
            else return 0;
        }
};
int Product::count=0;
int Product::removed=0;

Product inv[50];
class inventory{
    public:
        int list(bool x=false, bool summary = false){
            if(x)for(int i=0; i<50; i++){
                if(summary)inv[i].displaySummary();
                else inv[i].displayProduct();
            }
            else {
                for(int i=0; i<50; i++){
                int r = inv[i].searchProduct("dlt");
                if(r)return r;
                }
            }
        }
        int find(string n, bool many = false){
            if(many){
                for(int i=0; i<50; i++){
                int c = inv[i].searchProduct(n);
                inv[c].displayProduct();
                }
            }
            else {
                for(int i=0; i<50; i++){
                int c = inv[i].searchProduct(n);
                inv[c-1].displayProduct();
                if(c)return c;
                }
            }
        }
        void createProduct(){
            string n,d;
            double p;
            int q;
            cout<<"Enter Product Name: ";
            cin>>n;
            cout<<"Enter Product Description: ";
            cin>>d;
            cout<<"Enter Product Price in Rupee/-: ";
            cin>>p;
            cout<<"Enter Product Qty: ";
            cin>>q; 
            if(Product::removed==0) 
                inv[Product::count].product(n,d,p,q);
            else inv[list()].product(n,d,p,q);
            cout<<"Poduct Added"<<endl;
        }
        void updateProduct(){
            string n, cg = "", name;
            double p;
            int q;
            cout<<"Enter name Of Product which you want to Update: ";cin>>name;
            int f = find(name);
            f -= 1; 
            cout<<"Update Product Name:(y/n) ";cin>>cg;
            if(cg == "y"){
                cin>>n;
                inv[f].rename(n);
                }
            cout<<"Enter Product Description:(y/n) ";cin>>cg;
            if(cg == "y"){
                cin>>n;
                inv[f].updateDescription(n);
                }
            cout<<"Enter Product Price in Rupee/-:(y/n) ";cin>>cg;
            if(cg == "y"){
                cin>>p;
                inv[f].updatePrice(p);
                }
            cout<<"Enter Product Qty:(y/n) ";cin>>cg;
            if(cg == "y"){
                cin>>q;
                inv[f].updateQty(q);
                } 
            cout<<"Poduct Updated"<<endl;
        }
        void deleteProduct(){
            string n, cg = "", name;
            double p;
            int q;
            cout<<"Enter name Of Product which you want to Update: ";cin>>name;
            int f = find(name);
            cout<<"Delete This Product:(y/n) ";cin>>cg;
            if(cg == "y"){
                cin>>n;
                inv[f-1].delProduct();
                }
            cout<<"Poduct Deleted"<<endl;
        }
};


int main(){
    int id, auth = 0;
    string pswd;
    cout<<"*** Welcome to Inventory Management System ***"<<endl;
    cout<<"Create new Account to Continue :-"<<endl;
    cout<<"Create ID ( 0 to 9 ) of length four: ";
    cin>>id;
    cout<<"Create Password of Mininum 8 Letters like (A12b@i$1): ";
    cin>>pswd;
    cout<<"Creating Your ID"<<endl;
    Auth admin(id, pswd);
    auth = admin.login(admin);
    cout<<"Great!"<<endl<<"***** Get Started *****"<<endl;
    int x=1,w;
    inventory obj1;
    string name;
    while(x){
        if(auth){
        switch (x)
        {
        case 1:
            obj1.createProduct();
            break;
        case 2:
            cout<<"Enter name of Product: ";
            cin>>name;
            w = obj1.find(name);
            break;
        case 3:
            obj1.updateProduct();
            break;
        case 4:
            obj1.deleteProduct();
            break;
        case 5:
            obj1.list(true, true);
            break;
        case 6:
            auth = admin.logout();
            break;
    
        default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
    }
    else{
            cout<<"**** Login to Continue ****";
            cout<<"Enter your id: ";
            cin>>id;
            cout<<"Password: ";
            cin>>pswd;
            cin>>pswd;
            Auth temp(id, pswd);
            auth = admin.login(temp);
        }
        cout<<"Enter Your Choice: "<<endl;
        cout<<"- Add New Product <press 1>"<<endl;
        cout<<"- Search Product <press 2>"<<endl;
        cout<<"- Update Product <press 3>"<<endl;
        cout<<"- delete Product <press 4>"<<endl;
        cout<<"- Summary Report <press 5>"<<endl;
        cout<<"- Logout <press 6>"<<endl;
        cout<<"- Exit <press 0>"<<endl;
        cout<<"\t>> ";
        cin>>x;
    }

    return 0;
}