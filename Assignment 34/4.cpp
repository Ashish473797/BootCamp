// Write a program to copy the contents of one text file to another while changing the case of every alphabet.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream read;
    ofstream write;
    write.open("demo2.txt");
    read.open("demo1.txt", ios::in);
    read.seekg(0, ios_base::beg);
    char ch;
    while(!read.eof())
    {
        read.get(ch);

        if(ch>=65 && ch<=90)
            ch = tolower(ch);
        else if(ch>=97 && ch<=122)
            ch = toupper(ch);

        write<<ch;
        
    }
    read.close();
    write.close();
    return 0;
}