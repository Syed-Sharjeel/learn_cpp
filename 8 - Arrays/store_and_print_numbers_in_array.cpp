/*
 Read in 20 numbers in an array, each of which is in between 10 and 100 – if the number is not in 
this range, ask user to re-enter. As each number is read by the program, print it only if it is not a 
duplicate of a number already read. 
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
    int number[20], num, index=0;
    bool duplicate;

    cout<<"Enter 20 Number between 10 & 100";
    index++;
    while(index<20)
    {
        duplicate = false;
        cout<<"\nEnter Number "<<index<<": ";
        cin>>num;
        // Check if num is within range
        if ((num>10) && (num<100))
        {
            for (int dup=1; dup<=index; dup++)
            {
                if(number[dup] == num)
                {
                    duplicate = true;
                    cout<<"\nNumber already exsist/nEnter Again: ";

                }
            }
            if (duplicate == false)
            {
                number[index] = num;
                index++;
            }
        }
        else
        {
            cout<<"\nNumber is not in Range/nEnter Again: ";
        }
    }

    for (int j=1; j<=20; j++)
    {
        cout<<"\t"<<number[j];
    }
    return 0;
}
