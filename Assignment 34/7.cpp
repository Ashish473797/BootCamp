// There are 50 records in a file. Each record contains 6-character item-code, 20 characters for item-name and an integer price. 
// Write a program to read these records, arrange them in the descending order of price and write them in the same file, 
// overwriting the earlier records.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream write;
    ifstream read;
    read.open("demo1.txt", ios::in);
    read.seekg(29, ios_base::beg);
    int n;
    while(!read.eof())
    {
        
    }
    return 0;
}