// Write a C++ program to implement Hash Table using Template Class
#include<bits/stdc++.h>
using namespace std;
template <class T>
class Hash
{
    protected:
        T arr[10];
    public:
        int hash(T value)
        {
             return value%10;
        }
        void insert(T value)
        {
            int index = hash(value);
            arr[index] = value;
        }
        bool search(T value)
        {
            int index = hash(value);
            if(value == arr[index])
            return true;
            return false;
        }    
};
int main()
{
    Hash <int>h1;
    h1.insert(10);
    h1.insert(12);
    h1.insert(14);
    h1.insert(16);
    h1.insert(18);
    if(h1.search(10))
    cout<<"true"<<endl;
    else
    cout<<"flase";
    if(h1.search(9))
    cout<<"true";
    else
    cout<<"flase";
    return 0;
}