/*
Question: Write a program that asks the user to enter the length of base and perpendicular of a right-angle triangle. Then it 
determines the length of hypotenuse, angle between base and hypotenuse and angle between hypotenuse and 
perpendicular. Also find the sine and cosine values of these angles. (For hint refer to basic trigonometry from any 
mathematics book)
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
    float base, perp, hyp, sine_angle_hyp_perp, sine_angle_base_hyp, angle_base_hyp, angle_hyp_perp, cosine_angle_base_hyp, cosine_angle_hyp_perp;
    cout<<"Enter Length of Base: ";
    cin>>base;
    cout<<"Enter Length of Perpendicular: ";
    cin>>perp;

    //Hypotneuse Calculation
    hyp = sqrt(pow(base, 2) + pow(perp, 2));
    cout<<"Hypotneuse: "<<hyp<<endl;

    //angle betweeen Base & Hypotneuse
    angle_base_hyp = acos(base/hyp);
    cout<<"Angle between base and Hypotneuse: "<<angle_base_hyp<<" radians"<<endl;

    //angle between hypotneuse and perpendicular
    angle_hyp_perp = asin(perp/hyp);
    cout<<"Angle between Perpendicular & Hypotneuse: "<<angle_hyp_perp<<" radians"<<endl;

    //sine and cosine value of angle
    sine_angle_hyp_perp = sin(angle_hyp_perp);
    cout<<"sin("<<angle_hyp_perp<<"): "<<sine_angle_hyp_perp<<" radians"<<endl;
    sine_angle_base_hyp = sin(angle_base_hyp);
    cout<<"sin("<<angle_base_hyp<<"): "<<sine_angle_base_hyp<<" radians"<<endl;

    cosine_angle_base_hyp = cos(angle_base_hyp);
    cout<<"cos("<<angle_base_hyp<<"): "<<cosine_angle_base_hyp<<" radians"<<endl;

    cosine_angle_hyp_perp = cos(angle_hyp_perp);
    cout<<"cos("<<angle_hyp_perp<<"): "<<cosine_angle_hyp_perp<<" radians"<<endl;
    return 0;
}
