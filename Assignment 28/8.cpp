/*Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.*/
#include<iostream>
using namespace std;
class Coordinate
{
    int x,y,z;
    public: 
    Coordinate(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void showData()
    {
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }
    void operator , (Coordinate c)
    {
        x = c.x;
        y = c.y;
        z = c.z;
    }
};
int main()
{
    Coordinate c1(1,2,3),c2(5,6,7),c3(10,10,10),c4(0,0,0);
    c4=(c1,c2,c3);
    c4.showData();
    return 0;
}