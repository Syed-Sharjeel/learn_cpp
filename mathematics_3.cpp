/*
Question: Write a program that asks the user to enter coefficients a, b and c of the standard quadratic equation:    
The program then should compute and display discriminant, and the roots of equation 
Finally, give opinion on how the program could be made more general to different input conditions  
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
    float a, b, c, x1, x2, d;
    cout<<"QUADRATIC EQUATION SOLVER"<<endl;
    cout<<"=========================="<<endl;

    cout<<"Enter Value of a: ";
    cin>>a;
    cout<<"Enter Value of b ";
    cin>>b;
    cout<<"Enter Value of c: ";
    cin>>c;

    //Discriminant Calculation
    d = abs(pow(b, 2) - 4*a*c);
    cout<<"Discriminant = "<<d<<endl;

    //Using Quadratic Eqn Formula for x1, x2
    x1 = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
    cout<<"x1 = " << x1 <<endl;

    x2 = (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);
    cout<<"x2 = "<< x2 <<endl;
    return 0;
}
