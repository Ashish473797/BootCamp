/*Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add 
functions   to support Invent1 to float and Invent1 to Invent2 type.*/
#include<iostream>
using namespace std;
class Invent1
{
    float x=0,y=0;
    public:
    Invent1(int a,int b)
    {
        cout<<"pc of Invent1"<<endl;
        x = a;
        y = b;
    }
    void showData()
    {
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }
    float getx()
    {
        return x;
    }
    float gety()
    {
        return y;
    }
    operator float()
    {
        cout<<"float type cast of Invent1 to convert Invent1 to float"<<endl;
        return x;
    }
};
class Invent2
{
    float x,y;
    public:
    Invent2(){
        cout<<"dc of Invent2"<<endl;
        x=0,y=0;
    }
    Invent2(Invent1 i)
    {
        cout<<"pc of Invent2 to convert Invent1 to Invent2"<<endl;
        x=i.getx()+1;
        y=i.gety()+1;
    }
    void setData(int a,int b)
    {
        x=a;
        y=b;
    }
    void showData()
    {
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }
};
int main()
{
 Invent1 s1(4,5);
 Invent2 d1;
 float tv=1.0f;
 cout<<tv<<endl;

 tv=(float)s1;
 cout<<tv<<endl; 

 d1=(Invent2)s1;
 d1.showData();
 return 0;
}