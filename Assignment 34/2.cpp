// Write a C++ program to read a text file and count the number of characters in it.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream read;
    read.open("demo1.txt", ios::in);
    read.seekg(0, ios_base::beg);
    char ch;
    int count = 0;
    while(!read.eof())
    {
        read.get(ch);
        if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
        {
            count++;
        }
    }
    cout<<"Number of Character are "<<count-1<<endl;
    read.close();
    return 0;
}