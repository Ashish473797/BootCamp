/*Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volumeof the box.*/
#include<iostream>
using namespace std;
class Box
{
    int length,width,height;
    public:
    Box(int l,int w,int h)
    {
        length=l;
        width=w;
        height=h;
    }
    Box(){ length=0,width=0,height=0; }
    void setData(int l=1,int w=1,int h=1)
    {
        length=l,width=w,height=h;
    }
    int getVolume()
    {
        return length*width*height;
    }
};
int main()
{
    Box b1(2,3,5),b2;
    cout<<b1.getVolume()<<endl;
    b2.setData(4,5);
    cout<<b2.getVolume()<<endl;
    return 0;
}