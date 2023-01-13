/* Member Friend Functions in c++ */

#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumImgComplex(Complex, Complex);
};

class Complex
{

    int a, b;
    // individually declaring function as friend
    friend int Calculator::sumImgComplex(Complex, Complex);
    friend int Calculator::sumRealComplex(Complex, Complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumImgComplex(Complex o1, Complex o2){
    return (o1.b+o2.b);
}


int main()
{
    Complex o1, o2, sum;
    o1.setNumber(1, 5);
    o1.printNumber();
    o2.setNumber(2, 4);
    o2.printNumber();

    Calculator calc;
    int res1 = calc.sumRealComplex(o1, o2);
    int res2 = calc.sumImgComplex(o1, o2);
    cout <<"The sum of real part of o1 & o2 is : " << res1 << endl;
    cout <<"The sum of Imaginary part of o1 & o2 is : " << res2 << endl; 
    sum.setNumber(res1, res2);
    sum.printNumber();
    return 0;
}
