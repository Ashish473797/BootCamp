// Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
#include<cmath>
using namespace std;

class Cube
{
    int side;
    public:
    Cube(int s){ side=s; }
    Cube() { }
    int getVolume()
    {
        return side*side*side;
    }
};
int main()
{
    Cube c1(5),c2(3);
    cout<<c1.getVolume()<<endl<<c2.getVolume();
    return 0;
}