// Define a class Date and write a program to Display Date and initialise date object using Constructors.
#include<iostream>
using namespace std;
class Date
{
   int date,month,year;
   public:
   Date(int d,int m,int y)
   {
        date=d;
        month=m;
        year=y;
   }
   void showDate()
   {
        cout<<date<<"/"<<month<<"/"<<year<<endl;
   }
};
int main()
{
    Date d1(2,5,2016),d2(4,3,2023);
    d1.showDate();
    d2.showDate();
    return 0;
}