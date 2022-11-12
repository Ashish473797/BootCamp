// Define a class Addition that can add 2 or 3 numbers of different data types using function overloading.
#include<iostream>
using namespace std;
class Addition
{
        float sum;
    public:
        void sum(int a,int b)
        {
            sum = a+b;
        }
        void sum(float a,int b)
        {
            sum = a+b;
        }
        void sum(float a,float b)
        {
            sum = a+b;
        }
        void sum(int a,int b)
        {
            sum = a+b;
        }
        void sum(int a,int b,int c)
        {
            sum = a+b+c;
        }
        void sum(float a,int b,int c)
        {
            sum = a+b+c;
        }
        void sum(int a,float b,int c)
        {
            sum = a+b+c;
        }
        void sum(int a,int b,float c)
        {
            sum = a+b+c;
        }
        void sum(float a,float b,int c)
        {
            sum = a+b+c;
        }
        void sum(int a,float b,float c)
        {
            sum = a+b+c;
        }
        void sum(float a,int b,float c)
        {
            sum = a+b+c;
        }
        void sum(float a,float b,float c)
        {
            sum = a+b+c;
        }
        void showSum()
        {
            cout<<sum<<endl;
        }
        
};
int main()
{
    Addition a1,a2;
    a1.sum(2,3);
    a2.sum(2.5f,2.5f,5.0f);
    a1.showSum();
    a2.showSum();
    return 0;
}