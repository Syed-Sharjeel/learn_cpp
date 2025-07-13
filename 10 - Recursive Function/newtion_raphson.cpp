//  Write a recursive function to implement Newton Raphson Method algorithm to determine square root of a number. 
#include<iostream>
#include<cmath>
using namespace std;
double sqr_root(double num, double guess=1.0);
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Square Root: "<<sqr_root(n);
    return 0;
}
double sqr_root(double num, double guess)
{
    double next_guess = 0.5 * (guess + num / guess);
    if (fabs(next_guess - guess) < 0.0001)
        return next_guess;
    return sqr_root(num, next_guess);
}
