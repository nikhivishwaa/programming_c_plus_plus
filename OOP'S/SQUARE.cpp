    /* */

#include<iostream>
using namespace std;

float square(float a,int p){
    float power;
    if(p<1){
        power = 1;
    }
    else if(p==1){
        power = a;
    }
    else{
        p = (p-1); 
        power = a*square(a, p);
    }
    cout<<"ans = "<<power<<endl;
    return power;
}

int main(){
    float a;
    int p;
    cout<<"a = ";cin>>a;
    cout<<"b = ";cin>>p;
    square(a,p);
    return 0;
}