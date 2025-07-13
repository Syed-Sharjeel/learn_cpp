// Write a recursive function to implement the expansion of sin(x) with Taylor Series (precision upto 0.0001)  
#include<iostream>
#include<cmath>
using namespace std;
float sin(float x, int n);
int factorial(int num);
int main(void)
{
    float angle;
    cout<<"Enter Angle (in Radians): ";
    cin>>angle;
    cout<<"\n sin(x) = "<<sin(angle);
}
int factorial(int num)
{
    if ((num==1) || (num==0))
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}
float sin(float x, int n=0)
{
    float term = (pow(-1, n) / factorial((2*n) + 1)) * pow(x,(2*n)+1);
    if (fabs(term) < 0.0001)
    {
        return term;
    }
    else
    {
        return term + sin(x,n+1);
    }
}
