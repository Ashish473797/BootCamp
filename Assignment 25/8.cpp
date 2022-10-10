// Define a class Rectangle and define an instance member function to find the area of the rectangle.
#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    public:
    void setData(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int getArea()
    {
        return length*breadth;
    }
};
int main()
{
    Rectangle r1;
    r1.setData(3,5);
    cout<<r1.getArea()<<endl;
    return 0;
}