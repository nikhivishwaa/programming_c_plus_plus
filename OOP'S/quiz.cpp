    /* Find Distance Between 2 Points */

#include<iostream>
#include<math.h>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"points = ("<<x<<","<<y<<")"<<endl;
        }
        friend float distance(Point, Point);

};
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
   // cout<<"ans = "<<power<<endl;
    return power;
}

float distance(Point p, Point q){
    float d;
    int total = square((q.x-p.x),2) + square((q.y-p.y),2);
    d = sqrt(total);
    cout<<total<<" = sum"<<endl;
    cout<<"distance is : "<<d<<endl;
    return d;
}

int main(){
    Point p(3,5);
    p.displayPoint();
    Point q(5,7);
    q.displayPoint();
    distance(p, q);
    return 0;
}