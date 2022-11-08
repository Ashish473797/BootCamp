/*Write a C++ program to define a base class Item (item-no, name, price). Derive a class Discounted-Item (discount-percent). 
A customer purchases 'n' items. Display the item-wise bill and total amount using appropriate format.*/
#include<iostream>
using namespace std;
class Item
{
    protected:
        int itemNo;
        char name[32];
        float price;
};
class DiscontedItem : public Item
{
    protected:
        int discont;
    public:
        void setData()
        {
            cout<<"Enter item Name  : ";
            cin.ignore();
            cin.getline(name,32);
            cout<<"Enter item Number: ";
            cin>>itemNo;
            cout<<"Enter item Price : ";
            cin>>price;
            cout<<"Enter discont Percentage: ";
            cin>>discont;
        }
        void showData()
        {
            cout<<"Item Name  : "<<name<<endl;
            cout<<"Item Number: "<<itemNo<<endl;
            cout<<"Item Price : "<<price<<endl;
            cout<<"Discont %  : "<<discont<<endl;
            cout<<"-----------------------------"<<endl;
        }
        int getprice()
        {
            return price;
        }
        int getDisconted()
        {
            return price*discont/100;
        }
};
int main()
{
    int n,total=0,totDis=0;
    cout<<"How many item do you want to enter: ";
    cin>>n;
    DiscontedItem item[n];
    for(int i=0; i<n; i++)
    {
        item[i].setData();
        cout<<"----------------------------------"<<endl;
    }
    for(int i=0; i<n; i++)
    {
        item[i].showData();
        cout<<"-----------------------------"<<endl;
    }
    for(int i=0; i<n; i++)
    {
        total = total + item[i].getprice();
        totDis = totDis + item[i].getDisconted();
    }
    cout<<"Total amount is : "<<total<<endl<<"and total discont is : "<<totDis;
    return 0;
}