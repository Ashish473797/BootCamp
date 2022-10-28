/*Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/
#include<iostream>
#include<cstring>
using namespace std;
class CString
{
    char str[32];
    public:
    void setString()
    {
        cout<<"Enter a String: ";
        cin>>str;
    }
    void display()
    {
        cout<<str<<endl;
    }
    CString operator + (CString c)
    {
        CString temp;
        strcpy(temp.str,str);
        strcat(temp.str,c.str);
        return temp;
    }
    bool operator == (CString c);
};
bool CString::operator == (CString c)
    {
        for(int i=0;i<str[i];i++)
                if(str[i]!=c.str[i])
                return false;
        return true;    
    }
int main()
{
    CString s1,s2,s3;
    s1.setString();
    s2.setString();
    s3 = s1 + s2;
    s1.display();
    s2.display();
    s3.display();
    if(s1==s2)
    cout<<"same string";
    else
    cout<<"not same string";
    return 0;
}