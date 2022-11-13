/*Extend the above program to display the area of circles. This requires the addition of a new derived class 'circle' 
that computes the area of a circle. Remember, for a circle we need only one value, its radius, but the get_data() function 
in the base class requires two values to be passed. (Hint: Make the second argument of get_data()
function as a default one with zero value.)*/
#include<iostream>
#define pi 3.14
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
class Circle : public Shape
{
    protected:
        double radius;
    public:
        Circle(double r) : radius(r) {}
        void displayArea()
        {
            cout<<"Area of Circle is "<<pi*radius*radius<<endl;
        }
};
int main()
{
    Triangle t1(5,4);
    Rectangle r1(3,5);
    Circle c1(5);
    Shape *s1 = &c1;
    t1.displayArea();
    r1.displayArea();
    //c1.displayArea();
    s1->displayArea();
    return 0;
}