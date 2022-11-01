/*Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.*/
#include<iostream>
using namespace std;
class Integer
{
    int x;
    public:
    void setData(int n)
    {
        x=n;
    }
    void showData()
    {
        cout<<x<<endl;
    }
    operator int()
    {
        return x;
    }
};
int main()
{
    int i;
    Integer i1,i2;
    i1.setData(3);
    i1.showData();
    i=(int)i1+1;
    cout<<i<<endl;
    return 0;
}