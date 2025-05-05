/* Q1: Halley’s Method for Determination of roots of polynomial is 
X𝑛+1 = (Xn − 2f(Xn)f'(Xn)) / (2f'(Xn)2−f(Xn)f"(Xn))
Write a program to find roots of the following polynomial using Halley’s method, precision is 0.0001 
f(x)=ax3 + bx2 + cx + d
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
    double a, b, c, d, xn, x, xo;
    bool process = true;
    // Taking Inputs from User, the Coeffcients
    cout<<"Enter Value for a: ";
    cin>>a;
    cout<<"Enter Value for b: ";
    cin>>b;
    cout<<"Enter Value for c: ";
    cin>>c;
    cout<<"Enter Value for d: ";
    cin>>d;
    cout<<"Enter Initial Guess: ";
    cin>>xo;
    x = xo;
    xn = 0;
    // while loop body
    while (process)
    {
        double f = (a*pow(x,3)) + (b*pow(x,2)) + (c*x + d);
        double fx = (3*a*pow(x,2)) + (2*b*x + c);
        double fxx = (6*a*x) + (2*b);
        xn = x - ((2*f * fx) / ((2*pow(fx,2)) - (f * fxx)));
        cout<<endl<<xn;
        x = xn;
        if (fabs(xn - x) < 0.0001)
        {
            process = false;
        }
    }
    cout<<"\nApproximate Root: "<<xn;
    return 0;
}
