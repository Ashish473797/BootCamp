// Write a C++ program to open an output file 'a.txt' and append data to it.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream write;
    write.open("demo1.txt", ios::app);
    write<<" ";
    if(write)
    {
        cout<<"File Created Successfully!"<<endl;
    }
    else
    {
        cout<<"File not Created"<<endl;
    }
    write<<"from Varanasi";
    write.close();
    return 0;
}