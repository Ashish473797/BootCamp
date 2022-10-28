// Overload the operator unary minus (-) to negate the numbers.
#include<iostream>
using namespace std;
class Number
{
    int number;
    public:
    Number(int num)
    {
        number=num;
    }
    Number operator - ()
    {
        Number temp(0);
        temp.number=-number;
        return temp;
    }
    void display()
    {
        cout<<number;
    }
};
int main()
{
    Number n1(5),n2(0);
    n2=-n1;
    n2.display();
    return 0;
}