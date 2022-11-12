/*Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT*/
#include<iostream>
using namespace std;
class Float
{
    float val;
    public:
    Float(float x) : val(x) {}
    void showData()
    {
        cout<<val<<endl;
    }
    Float operator + (Float f)
    {
        return val + f.val;
    }
    Float operator - (Float f)
    {
        return val - f.val;
    }
    Float operator / (Float f)
    {
        return val / f.val;
    }
    Float operator * (Float f)
    {
        return val * f.val;
    }
};
int main()
{
    Float f1(7),f2(3);
    (f1+f2).showData();
    (f1-f2).showData();
    (f1/f2).showData();
    (f1*f2).showData();
    return 0;
}