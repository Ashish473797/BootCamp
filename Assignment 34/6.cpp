// Write a C++ program that counts the total number of characters, words and lines in the file.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream read;
    read.open("demo3.txt", ios::in);
    read.seekg(0, ios_base::beg);
    string str;
    char ch;
    int word = 0, character = 0, line = 0;
    while(!read.eof())
    {
        read.get(ch);
        if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
        {
            character++;
        }
        else 
        {
            if(ch == 32)
            word++;
        }
    }
    read.close();
    read.open("demo3.txt", ios::in);
    while(!read.eof())
    {
        if(getline(read,str))
        line++;
    }
    cout<<"Number of Character are "<<character<<endl;
    cout<<"Number of Words are "<<word+1<<endl;
    cout<<"Number of lines are "<<line<<endl;
    return 0;
}