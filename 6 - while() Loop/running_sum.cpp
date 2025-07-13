/*
Write a program that continuously asks user to enter an integer and displays the SUM of the current 
input with all previous input. The program continuous to run until the SUM value is less than equal to 
100. Use while() loop. 
 
Sample Run: 
Enter an integer: 12 [Enter] 
Running Sum = 12 
 
Enter an integer: 10 [Enter] 
Running Sum = 22 
 
Enter an integer:70 [Enter] 
Running Sum = 92 
. 
. 
. 
Sum exceeds 100. Program terminated.
*/
#include<iostream>
using namespace std;
int main(void)
{
    int num, running_sum;
    running_sum = 0;
    while(running_sum <= 100)
    {
        cout<<"Enter an Integer: ";
        cin>>num;
        running_sum+=num;
        cout<<"Running Sum = "<< running_sum << endl;
    }
    cout<<"Sum exceeds 100. Program terminated.";
    return 0;
}
