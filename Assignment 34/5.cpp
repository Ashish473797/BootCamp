// Write a C++ program to merge the two files.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream write;
    write.open("demo3.txt", ios::app);
    ifstream read1, read2;
    read1.open("demo1.txt", ios::in);
    read2.open("demo2.txt", ios::in);
    read1.seekg(0, ios_base::beg);
    read2.seekg(0, ios_base::beg);
    string str;
    while(!read1.eof())
    {
        getline(read1,str);
        write<<str<<endl;
    }
    while(!read2.eof())
    {
        getline(read2,str);
        write<<str<<endl;
    }
    read2.close();
    read1.close();
    write.close();
    return 0;
}