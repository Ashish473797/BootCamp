/*Define a base class Animals having member function sound() . Define another derived class from Animals class named Dogs. 
You need to override the sound function of the base class in the derived class.*/
#include<iostream>
using namespace std;
class Animals
{
    protected:
        float weight;
        char colour[32];
    public:
        virtual void sound()
        {
            cout<<"sound of Animals"<<endl;
        }    
};
class Dog : public Animals
{
    public:
        void sound()
        {
            cout<<"sound of Dog"<<endl;
        }
};
int main()
{
    Animals a1;
    Dog d1;
    a1.sound();
    d1.sound();
    return 0;
}