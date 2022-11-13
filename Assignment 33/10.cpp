/*Create a base class called shape. Use this class to store two double type values that could be used to compute 
the area of figures. Derive two specific classes called square and parallelogram from the base shape. 
Add to the base class, a member function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make display_area() as a virtual function 
and redefine this function in the derived classes to suit their requirements.Using these three classes, design a program 
that will accept dimensions of a square or a parallelogram interactively, and display the area*/
#include<iostream>
#define pi 3.14
using namespace std;
class Shape
{
    protected:
        double x,y;
    public:
        Shape()
        {
            x = 0;
            y = 0;
        }
        void setData(double a = 0, double b = 0)
        {
            x = a;
            y = b;
        }
        virtual void displayArea() = 0;
        
};
class Square : public Shape
{
    public:
        void displayArea()
        {
            cout<<"Area of Square is "<<x*x<<endl;
        }
};
class Parallelogram : public Shape
{
    public:
        void displayArea()
        {
            cout<<"Area of Parallelogram is "<<x*y<<endl;
        }
};
int main()
{
    Square c1;
    Parallelogram s1;
    c1.setData(4);
    s1.setData(5,10);
    c1.displayArea();
    s1.displayArea();
    return 0;
}