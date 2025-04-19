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
