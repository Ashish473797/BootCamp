//Define a class Rectangle and overload area function for different types of data type.
#include<iostream>
using namespace std;
class Rectangle
{
        float area;
    public:
        void findArea(int a,int b)
        {
            area = a*b;
            cout<<"int int"<<endl;
        }
        void findArea(float a,float b)
        {
             area = a*b;
             cout<<"float float"<<endl;
        }
        void findArea(int a,float b)
        {
            area = a*b;
            cout<<"int float"<<endl;
        }
        void findArea(float a,int b)
        {
            area = a*b;
            cout<<"float int"<<endl;
        }
        void showArea()
        {
            cout<<area<<endl;
        }
};
int main()
{
    Rectangle r1,r2,r3,r4;
    r1.findArea(7,3);
    r2.findArea(7.5f,2.5f);
    r3.findArea(3.5f,2);
    r4.findArea(1,2.5f);
    r1.showArea();
    r2.showArea();
    r3.showArea();
    r4.showArea();
    return 0;
}