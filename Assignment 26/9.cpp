/*Define a class Bill and define its member function get() to take detail of customer,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;
class Bill
{
    char name[32];
    float unit;
    float bill;
    public:
    void get()
    {
        cout<<"Enter customer Name: ";
        cin.ignore();
        cin.getline(name,32);
        cout<<"How may unit consume: ";
        cin>>unit;
    }
    void calculateBill()
    {
        switch (unit<=100)
        {
        case 1:
            bill = unit*1.20;
            break;

        case 0:
            switch (unit<=200)
            {
                case 1:
                    bill = 120 + (unit-100)*2.0;
                    break;

                case 0:
                    bill = 320 + (unit-200)*3.0;
                    break;     
            }
            break;  
        
        default:
            cout<<"something wrong!";
            break;
        }
    }
    void showBill()
    {
        cout<<bill<<endl;
    }
};
int main()
{
    Bill b1,b2;
    b1.get();
    b2.get();
    b1.calculateBill();
    b1.showBill();
    b2.calculateBill();
    b2.showBill();
    return 0;
}