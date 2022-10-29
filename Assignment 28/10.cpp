/*Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.*/
#include<iostream>
using namespace std;
class Distance
{
    int feet,inches;
    public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
    void operator () (int a,int b,int c)
    {
        feet = a+c+5;
        inches = a+b+15;
    }
    void showData()
    {
        cout<<"feet = "<<feet<<" inches = "<<inches<<endl;
    }
};
int main()
{
    Distance d1,d2(5,6),d3;
    d1.showData();
    d2.showData();
    d3(5,6,4);
    d3.showData();
    return 0;
}