// Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;

class Area
{
    int side, length, breadth, radius;

    public: 
    void setSide(int s)
    {
        side=s;
    }
    void setlenbth(int l,int b)
    {
        length=l,breadth=b;
    }
    void setRadius(int r)
    {
        radius=r;
    }
    int getAreaSquare()
    {
        return side*side;
    }
    int getAreaCircle()
    {
        return 3.14*radius*radius;
    }
    int getAreaRectangle()
    {
        return length*breadth;
    }
};
int main()
{
    Area a1;
    a1.setSide(4);
    a1.setlenbth(4,5);
    a1.setRadius(3);
    
    cout<<a1.getAreaSquare()<<endl;
    cout<<a1.getAreaRectangle()<<endl;
    cout<<a1.getAreaCircle()<<endl;
    return 0;
}