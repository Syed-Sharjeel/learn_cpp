/*
Write a program that counts number of digits in an integer entered by the user. Use while() loop. 
 
Sample Run: 
Enter an integer: 123456 [Enter] 
No. of digits = 6 
*/
#include<iostream>
using namespace std;
int main(void)
{
    int num, digit_count = 0;
    cout<<"Enter an Integer: ";
    cin>> num;
    while(num>=1)
    {
        num = num / 10;
        digit_count+=1;
    }
    cout<<"No. of digits = "<<digit_count;

    return 0;
}
