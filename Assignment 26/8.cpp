/*Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it. Initialise all details using constructor.*/
#include<iostream>
using namespace std;
class Bank
{
    static float roi;
    float principle;
    int year;
    public:
    Bank(float p,int y)
    {
        principle=p;
        year=y;
    }
    double getSI()
    {
        return principle*(1+(roi/100)*year);
    }
};
float Bank::roi=5.50;
int main()
{
    Bank ashish(100,10);
    cout<<ashish.getSI();
    return 0;
}