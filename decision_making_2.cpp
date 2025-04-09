/*
Question: C++ provides an alternate approach for if () – else if () statements, that is switch () – case statement.
Write a calculator program that takes two numbers, and operator as input.
If the user entered the operator other than +,-,*,/ then program should print “Invalid Operator” on screen.
*/
#include<iostream>
using namespace std;
int main(void)
{
    float n1, n2;
    char op;
    cout<<"Enter 1st Number: ";
    cin>>n1;
    cout<<"Enter 2nd Number: ";
    cin>>n2;
    cout<<"Enter Operator: ";
    cin>>op;
    switch (op)
    {
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        default:
            cout<<"Invalid Operator";
    }
    return 0;
}
