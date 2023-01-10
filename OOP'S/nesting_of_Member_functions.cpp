    /* Nesting of member functions */

#include<iostream>
#include<string>
using namespace std;

class binary{
    
    string s;
    void chk_bin(void);

    public:
        void read(void);
        void display(void);
        void ones_compliment(void);
};

void binary :: read(){
    cout<<"Enter a number : "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i = 0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void){
    chk_bin();  // nesting of member function
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void binary :: display(void){
    cout<<"\nDisplaying your binary number"<<endl;
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
    }
}

int main(){
    binary f;
    f.read();
    // f.chk_bin();
    f.ones_compliment();
    f.display();
    return 0;
}