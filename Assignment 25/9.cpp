// Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;

class Circle
{
    int radius;
    public:
    void setData(int r)
    {
        radius=r;
    }
    int getArea()
    {
        return 3.14*radius*radius;
    }
};
int main()
{
    Circle c1;
    c1.setData(10);
    cout<<c1.getArea();
    return 0;
}