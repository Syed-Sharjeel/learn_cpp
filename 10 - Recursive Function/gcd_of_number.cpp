// Calculation of GCD using Recursive Function
#include <iostream>
using namespace std;
int gcd(int a, int b); 
int main() 
{
    int a,b;
    cout<<"Enter Two Number: ";
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a, b)<<endl;
    return 0;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
