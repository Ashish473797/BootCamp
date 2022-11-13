//Using the concept of pointers, write a function that swaps the private data values of two objects of the same class type.
#include<iostream>
using namespace std;
class Person
{
    protected:
        int x;
    public:
        Person(int x) : x(x) {}
        void swapData(Person *p)
        {
            int temp = x;
            x = p->x;
            p->x = temp;
        }
        void showData()
        {
            cout<<x<<endl;
        }
};
int main()
{
    Person p1(2), p2(3);
    p1.swapData(&p2);
    p1.showData();
    p2.showData();
    return 0;
}