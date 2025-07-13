/*
Question: Write a program that asks user to enter 3 numbers and then finds the largest and smallest among them and 
displays both largest and smallest number.
Note: This program can be written using Multiple if() statements. This exercise is a test of your thinking abilities. 
*/
#include<iostream>
using namespace std;
int main(void)

{
    int n1, n2, n3;
    cout<<"Enter 1st Number: ";
    cin>>n1;
    cout<<"Enter 2nd Number: ";
    cin>>n2;
    cout<<"Enter 3rd Number: ";
    cin>>n3;
    if (n1>n2 && n1>n3)
    {
        cout<<n1<<" is largest"<<endl;
    }
    if (n2>n1 && n2>n3)
    {
        cout<<n2<<" is largest"<<endl;
    }
    if (n3>n1 && n3>n2)
    {
        cout<<n3<<" is largest"<<endl;
    }
    return 0;
}
