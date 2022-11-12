// Write a C++ program to find the factorial of a number using copy constructor
#include<iostream>
using namespace std;
class Factorial
{
    int n;
    int factorial=1;
    public: 
    Factorial(int a) : n(a) 
    {
        for(int i=1; i<=n; i++)
        factorial = factorial * i;
    }
    Factorial(Factorial &f)
    {
        n = f.n;
        for(int i=1; i<=n; i++)
        factorial = factorial * i;
    }
    void showFact()
    {
        cout<<factorial<<endl;
    }
};
int main()
{
    Factorial f1(3),f2(5);
    f1.showFact();
    f1 = f2;
    f1.showFact();
    f2.showFact();
    return 0;
}