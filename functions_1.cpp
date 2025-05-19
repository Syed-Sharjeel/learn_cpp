// Write program with a function that accepts 3 int type numbers and returns the smallest among them.
#include<iostream>
using namespace std;
int smallest(int num1, int num2, int num3);
int main(void)
{
    int a=-1000,b=-1,c=5;
    cout<<"Enter Three Integers: ";
    cin>>a>>b>>c;
    cout<<"\nSmallest Integer: "<<smallest(a,b,c);
    return 0;
}
int smallest(int num1, int num2, int num3)
{
    if ((num1<num2) && (num1<num3))
    {
        return num1;
    }
    else if((num2<num1) && (num2<num3))
    {
        return num2;
    }
    else
    {
        return num3;
    }
}