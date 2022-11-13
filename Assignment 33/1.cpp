/*Create a base class called shape. Use this class to store two double type values that could be used to compute the area of figures. 
Derive two specific classes called triangle and rectangle from the base shape. Add to the base class, a member function get_data() 
to initialise base class data members and another member function display_area() to compute and display the area of figures. 
Make display_area() as a virtual function and redefine this function in the derived classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a triangle or a rectangle interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in the case of rectangles, 
and as base and height in the case of the triangles, and used as follows:
Area of rectangle = x * y Area of triangle = 1/2 * x * y. */
#include<iostream>
using namespace std;
class Shape
{
    protected:
        double length,breadth;
    public:
        Shape() { length = 0, breadth = 0; }
        Shape(double a,double b) : length(a),breadth(b) {}
        int getData()
        {
            return length*breadth;
        }
        virtual void displayArea()
        {
            cout<<"Area of the Shape is "<<length*breadth<<endl;
        }

};
class Triangle : public Shape
{
    protected:
        double base, height;
    public:
        Triangle(double b, double h) : base(b), height(h) {}
        void displayArea()
        {
            cout<<"Area of Triange is "<<base*height/2<<endl;
        }
};
class Rectangle : public Shape
{
    public:
        Rectangle(double l,double b)
        {
            length = l;
            breadth = b;
        }
        void displayArea()
        {
            cout<<"Area of Rectangle is "<<length*breadth<<endl;
        }
};
int main()
{
    Triangle t1(5,4);
    Rectangle r1(3,5);
    t1.displayArea();
    r1.displayArea();
    return 0;
}