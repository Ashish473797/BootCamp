// Write a C++ Program to implement push and pop methods from stack using template.
#include<bits/stdc++.h>
using namespace std;
template <class T>
class Stack
{
    protected:
        int top;
        T st[100];
    public:
        Stack()
        {
            top = -1;
        }
        void push(T i)
        {
            st[++top] = i;
        }
        T pop()
        {
            return st[top--];
        }
};
int main()
{
    int size;
    Stack <int> stack1;
    cout<<"how many element do you want to enter in stack: ";
    cin>>size;
    cout<<"enter element one by one:- "<<endl;
    for(int i=0; i<size; i++)
    {
        int n;
        cin>>n;
        stack1.push(n);
    }
    cout<<endl<<stack1.pop();
    return 0;
}