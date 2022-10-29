//Consider the following class mystring
/*Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
#include<iostream>
using namespace std;
class MyString
{
    char str [100] = {0};
    public:
    void setData()
    {
        cout<<"Enter String"<<endl;
        cin.getline(str,100);
    }
    void showData()
    {
        cout<<str<<endl;
    }
    MyString operator ! ()
    {
        MyString temp;
        for(int i=0;str[i];i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                temp.str[i] = str[i]+32;
            }
            if(str[i]>=97 && str[i]<=122)
            {
                temp.str[i] = str[i]-32;
            }
        }
        return temp;
    }
};
int main()
{
    MyString s1;
    s1.setData();
    s1.showData();
    (!s1).showData();
    return 0;
}