//  Test for a number if it is prime or composite using recursion.
#include<iostream>
using namespace std;
bool prime_status (int num);
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<n<<" is ";
    if (prime_status(n) == true)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Composite";
    }
    return 0;
}
bool prime_status (int num)
{
    if((num>2) && (num%2==0))
    {
        return false;
    }
    if((num>3)&&(num%3==0))
    {
        return false;
    }
    if(num==2)
    {
        return true;
    }
}
