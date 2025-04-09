/*
Desired Output
2.5, 10
25, 15
250, 20
2500, 25
*/
#include<iostream>
using namespace std;
int main(void)
{
    float x = 2.5;
    int y = 10;
    cout<<x<<", "<<y<<endl;

    x *= 10.0;
    y += 5;
    cout<<x<<", "<<y<<endl;

    x *= 10.0;
    y += 5;
    cout<<x<<", "<<y<<endl;

    x *= 10.0;
    y += 5;
    cout<<x<<", "<<y<<endl;
    return 0;
}