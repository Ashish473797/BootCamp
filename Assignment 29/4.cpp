//Create Product class and convert Product type to Item type using casting operator
#include<iostream>
using namespace std;
class Item
{
    int quantity,weight;
    public:
    Item(){}
    Item(int q)
    {
        quantity=q;
    }
    void showData()
    {
        cout<<"quantity = "<<quantity<<" weight = "<<weight<<endl;
    }
};
class Product
{
    int id,price;
    public:
    void setData(int i,int p)
    {
        id = i;
        price = p;
    }
    operator Item()
    {
       return id; 
    }
    void showData()
    {
        cout<<"id = "<<id<<" price = "<<price<<endl;
    }
};
int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=(Item)p1;
 p1.showData();
 i1.showData();
 return 0;
}
