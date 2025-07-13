/*
Write a program to print following pattern using for loops (do not use if, if-else or any other decision making statement). 
   *  
  *** 
 ***** 
*******
*/

#include<iostream>
using namespace std;
int main(void)
{
    int lines = 7;
    for (int i=1; i<=7; i+=2)
    {
        for (int s=1; s<=lines-i; s+=2)
        {
            cout<<" ";
        }

        for (int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
