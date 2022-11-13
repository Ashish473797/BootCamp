/*Create a base class called volume. Use this class to store two double type values that could be used to compute 
the volume of figures. Derive two specific classes called cube and sphere from the base shape. Add to the base class, 
a member function get_data() to initialise base class data members and another member function display_volume() 
to compute and display the volume of figures. Make display_volume() as a virtual function and redefine this function 
in the derived classes to suit their requirements.Using these three classes, design a program that will accept 
dimensions of a cube or a sphere interactively, and display the volume.*/
#include<iostream>
#define pi 3.14
using namespace std;
class Volume
{
    protected:
        double x,y;
    public:
        Volume()
        {
            x = 0;
            y = 0;
        }
        void setData(double a = 0, double b = 0)
        {
            x = a;
            y = b;
        }
        virtual void displayVolume()
        {
            cout<<"Volume is "<<x*y<<endl;
        }
};
class Cube : public Volume 
{
    public:
        void displayVolume()
        {
            cout<<"Volume of Cube is "<<x*x*x<<endl;
        }
};
class Sphere : public Volume
{
    public:
        void displayVolume()
        {
            cout<<"Volume of Sphere is "<<(4/3)*pi*(x*x*x)<<endl;
        }
};
int main()
{
    Cube c1;
    Sphere s1;
    c1.setData(4);
    s1.setData(5);
    c1.displayVolume();
    s1.displayVolume();
    return 0;
}