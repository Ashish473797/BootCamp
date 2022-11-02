/*Create two classes Rupee and Dollar and add necessary functions to support Rupee to 
Dollar and Dollar to Rupee conversion.*/
#include<iostream>
using namespace std;
class Rupee
{
    float r;
    public:
    Rupee(){ r=0;}
    Rupee(float x)
    {
        r = x;
    }
    float getRupee()
    {
        return r;
    }
    void display()
    {
        cout<<r<<" rupee"<<endl;
    }
};
class Dollar
{
    float d;
    public:
    Dollar(Rupee x)
    {
        d = x.getRupee();
    }
    void display()
    {
        cout<<d<<" dollar"<<endl;
    }
    operator Rupee()
    {
        return (d*82.0);
    }
};
int main()
{
    Rupee r = 23;
    Dollar d = (Rupee)r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = (Dollar)d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}
