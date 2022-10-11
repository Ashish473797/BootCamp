// Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.
#include<iostream>
using namespace std;
class Square
{
    static int flag;
    int val;
    int square;
    public:
    void setData(int n)
    {
        flag++;
        val=n;
    }
    int getData()
    {
        flag++;
        return val;
    }
    void sq()
    {
        flag++;
        square=val*val;
    }
    int getSquare()
    {
        flag++;
        return square;
    }
    static int getFunCall()
    {
        return flag;
    }
};
int Square::flag;
int main()
{
    Square s1;
    s1.setData(2);
    s1.getData();
    s1.sq();
    cout<<s1.getSquare()<<endl;
    cout<<Square::getFunCall();
    return 0;
}