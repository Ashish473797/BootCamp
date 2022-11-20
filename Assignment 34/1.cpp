// Write a C++ program to create a file and print “File created successfully” and throw an error if file is not created.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream write;
    write.open("demo1.txt", ios::app);
    if(write)
    {
        cout<<"File Created Successfully!"<<endl;
    }
    else
    {
        cout<<"File not Created"<<endl;
    }
    write.close();
    return 0;
}