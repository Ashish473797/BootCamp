//Define a C++ class fraction
/* Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >> */
#include<iostream>
using namespace std;
class Fraction
{
   long numerator;
   long denominator;
   public:
   Fraction (long n=0, long d=0)
   {
        numerator=n;
        denominator=d;
   }
   Fraction operator ++ (int i)
   {
        Fraction temp;
        temp.numerator = numerator++;
        temp.denominator = denominator++;
        return temp;
   }
   Fraction operator ++ ()
   {
        Fraction temp;
        temp.numerator = ++numerator;
        temp.denominator = ++denominator;
        return temp;
   }
   friend istream & operator >> (istream &,Fraction &);
   friend ostream & operator << (ostream &,Fraction &);
};
istream & operator >> (istream &input,Fraction &f)
{
    cout<<"Enter numerator: ";
    input>>f.numerator;
    cout<<"Enter denomerator: ";
    input>>f.denominator;
    return input;
}
ostream & operator << (ostream &output,Fraction &f)
{
    output<<f.numerator<<"/"<<f.denominator<<endl;
    return output;
}
int main()
{
    Fraction f1,f2;
    cout<<f1;
    cout<<f2;
    cout<<"Enter 1st fraction:"<<endl;
    cin>>f1; 
    cout<<"Enter 2nd fraction:"<<endl;
    cin>>f2;
    cout<<f1<<f2;
    f1++;
    ++f2;
    cout<<f1<<f2;  
    return 0;
}