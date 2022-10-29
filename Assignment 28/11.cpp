/* Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that function */
#include<iostream>
using namespace std;
class Marks
{
    int marks;
    public:
    Marks(int m)
    {
        marks=m;
    }
    void showData()
    {
        cout<<"Marks is "<<marks<<endl;
    }
    Marks * operator -> ()
    {
        return this;
    }
};
int main()
{
    Marks m1(90),m2(40);
    m1->showData();
    m2->showData();
    return 0;
}