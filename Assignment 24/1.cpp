//Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int prime(int n)
{
   for(int i=2;i<n;i++)
   {
    if(n%i==0)
        return 0;
   }
   return 1;
}
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(prime(n))
    cout<<"Prime Number";
    else
    cout<<"Not Prime Number";
    return 0;
}