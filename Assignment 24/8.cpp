// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.
#include<iostream>
using namespace std;
float Area(float r)
{
    return 3.14*r*r;
}
int Area(int l,int b)
{
    return l*b;
}
float Area(float h,float b)
{
    return h*b/2;
}
int main()
{
    float r;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Area of circle is "<<Area(r)<<endl;

    int len,bth;
    cout<<"Enter length and breath of rectangle: ";
    cin>>len>>bth;
    cout<<"Area of rectangle is "<<Area(len,bth)<<endl;
    float bs,ht;
    cout<<"Enter height and base of triangle: ";
    cin>>bs>>ht;
    cout<<"Area of triangle is "<<Area(bs,ht)<<endl;
    return 0;
}