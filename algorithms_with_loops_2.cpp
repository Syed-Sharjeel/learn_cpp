/*  Write an iterative algorithm to implement the following expansion (precision upto 0.0001)
[sin(x) from Taylor Series]
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
    // Initialization
    double xo, x, xn, sinx, n=0, ans;

    //Taking inputs from User
    cout<<"Enter Value for x: ";
    cin>>xo;
    x = xo;
    sinx = x;
    ans = x;

    // while loop body
    while (fabs(sinx) > 0.0001)
    {
        n++;
        double denominator=1;
        // Factorial Calculation
        for (int i=1; i<=((2*n)+1); i++)
        {
            denominator*=i;
        }
        sinx = (pow(-1,n) / denominator) * (pow(x,((2*n)+1)));
        ans += sinx;
    }
    cout<<"sin("<<x<<"): "<<ans;
    return 0;
}