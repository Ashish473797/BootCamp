// Create an array and implement a search function in the array.
#include<iostream>
using namespace std;
class Array
{
    int size=0, capacity = 10;
    int arr[10];
    public:
    int search(int value)
    {
        for(int i=0; i<10; i++)
        {
            if(arr[i]==value)
            return i;
        }
        return -1;
    }
    void insert(int value)
    {
        if(size==capacity)
        {
            cout<<"Array is Full!\n";
        }
        else
        arr[size++] = value;
    }
    int access(int index)
    {
        if(index>=0 && index<10)
        return arr[index];
        return -1;
    }
    void showData()
    {
        for(int i=0; i<10; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Array a1;
    a1.insert(1);
    a1.insert(2);
    a1.insert(3);
    a1.insert(4);
    a1.insert(5);
    a1.insert(6);
    a1.insert(7);
    a1.insert(8);
    a1.insert(9);
    a1.insert(10);
    a1.insert(11);
    a1.showData();
    if(a1.search(5) == -1)
    {
        cout<<"value not found";
    }
    else
    cout<<"\n"<<a1.search(5);
}