/*
Write a program to print following pattern using for loops (do not use if, if-else or any other decision making statement). 
   1 
  121 
 12321 
1234321 
*/

#include<iostream>
using namespace std;
int main(void)
{
    int lines = 4;
    int i, j, s, k;
    for (int i=1; i<=4; i++)
    {
        for (int s=1; s<=lines-i; s++)
        {
            cout<<" ";
        }

        for (int j=1; j<=i; j++)
        {
            cout<<j;
            if (i==j)
            {
                for (k=j; k!=1; k--)
                {
                    cout<<k-1;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}