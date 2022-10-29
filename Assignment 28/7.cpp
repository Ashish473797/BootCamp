// Create an Integer class and overload logical not operator for that class.
#include<iostream>
using namespace std;
class Integer
{
    int i;
    public:
    Integer(int i)
    {
        Integer::i=i;
    }
    Integer operator ! ()
    {
        return !i;
    }
    void showData()
    {
        cout<<i<<endl;
    }
};
int main()
{
    Integer i1(1),i2(0),i3(0),i4(0);
    i1.showData();
    i2 = i3 = !i4;
    i2.showData();
    (!i3).showData();
    i4 = !i3;
    i4.showData();
    return 0;
}