// Overload subscript operator [] that will be useful when we want to check for an index out of bound.
#include<iostream>
using namespace std;
class Array
{
    int arr[100];
    const int size=100;
    public:
    Array()
    {

    }
    void setData()
    {
        int idx;
        int val;
        cout<<"Enter index were you want to set value: ";
        cin>>idx;
        if(idx>=size)
        {
            cout<<"error index out of bond!"<<endl;
            exit(0);
        }
        cout<<"Enter Value: ";
        cin>>val;
        arr[idx]=val;
    }
    void showData(int idx)
    {
        if(idx>=size)
        {
            cout<<"error index out of bond!"<<endl;
            exit(0);
        }
        cout<<arr[idx]<<endl;
    }
    int operator [] (int idx)
    {
        if(idx>=size)
        {
            cout<<"error index out of bond!"<<endl;
            exit(0);
        }
        return (arr[idx]);
    }
};
int main()
{
    cout<<"remember only 100 index for each object"<<endl;
    Array a1,a2;
    a1.setData();
    a1.showData(10);
    cout<<a2[110];
    return 0;
}