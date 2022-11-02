//Create a Product class and convert Product type to Item type using constructor
#include<iostream>
using namespace std;
class Product
{
    int id,price;
    public:
    void setData(int i,int p)
    {
        id=i;
        price=p;
    }
    int getId()
    {
        return id;
    }
    int getPrice()
    {
        return price;
    }
};
class Item
{
    int quantity,weight;
    public:
    Item(){}
    Item(Product p)
    {
        quantity = p.getId();
        weight = p.getPrice();
    }
    void showData()
    {
        cout<<"quantity = "<<quantity<<endl<<"weight = "<<weight<<endl;
    }
    
};
int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=(Item)p1;
    i1.showData();
    return 0;
}
