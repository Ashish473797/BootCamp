// Write a C++ program to calculate the area of triangle, rectangle and circle using
// constructor overloading. The program should be menu driven.
#include<iostream>
using namespace std;
class Shape
{
     int height,base,area;
     float length, breadth, radius;
     
     public:
     Shape(int h, int b) : height(h), base(b) { area = h*b/2; }
     Shape(float l, float b) : length(l), breadth(b) { area = l*b; }
     Shape(float r) : radius(r) { area = 3.14*r*r; }
     void showArea()
     {
        cout<<area<<endl;
     }
};
int main()
{
    int n;
    cout<<"-------------------------------"<<endl;
    cout<<"1 for find the area of triangle"<<endl;
    cout<<"2 for find the area of rectangle"<<endl;
    cout<<"3 for find the area of circle"<<endl;
    cout<<"4 for exit"<<endl;
    cout<<"enter yout choice: ";
    cin>>n;
    cout<<"-------------------------------"<<endl;
    switch (n)
    {
    case 1:
    {
        int height,base;
        cout<<"Enter Height and Base of Triangle: ";
        cin>>height>>base;
        Shape triangle(height,base);
        triangle.showArea();
        break;
    }
    case 2:
    {
        float length,breadth;
        cout<<"Enter length and breadth of rectangle: ";
        cin>>length>>breadth;
        Shape rectangle(length,breadth);
        rectangle.showArea();
        break;
    }
    case 3:
    {
        float radius;
        cout<<"Enter radius of Circle: ";
        cin>>radius;
        Shape circle(radius);
        circle.showArea();
        break;
    } 
    case 4:
        exit(0);  
    default:
        cout<<"invalid input!"<<endl;
        break;
    }
    return 0;
}