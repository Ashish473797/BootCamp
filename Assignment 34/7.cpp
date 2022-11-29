// There are 50 records in a file. Each record contains 6-character item-code, 20 characters for item-name and an integer price. 
// Write a program to read these records, arrange them in the descending order of price and write them in the same file, 
// overwriting the earlier records.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Record
{
    protected:
        int item_code;
        string item_name;
        float item_price;
    public:
        void setData(int code, string name, float price)
        {
            item_code = code;
            item_name = name;
            item_price = price;
        }
        void update()
        {
            ofstream write1;
            write1.open("demo2.txt", ios::app);
            write1<<item_code<<endl;
            write1<<item_name<<endl;
            write1<<item_price<<endl;
            write1.close();
            del(item_code);
        }
        void del(int code)
        {
            ifstream read2;
            read2.open("demo1.txt");

            ofstream write2;
            write2.open("demo3.txt", ios::app);

            Record r2;
            while(!read2.eof())
            {
                read2>>r2.item_code;
                read2.ignore();
                getline(read2, r2.item_name);
                read2>>r2.item_price;

                if(r2.item_code != code)
                {
                    write2<<r2.item_code<<endl;
                    write2<<r2.item_name<<endl;
                    write2<<r2.item_price<<endl<<endl;
                }
            }

            read2.close();
            write2.close();

            remove("demo1.txt");
            rename("demo3.txt","demo1.txt");
        }
};
int main()
{
    Record r1;
    int code;
    string name;
    float price;

    ifstream read1;
    read1.open("demo1.txt", ios::in);
    read1.seekg(0, ios_base:: beg);
    int max = 0;
    while(!read1.eof())
    {
        read1>>code;
        read1.ignore();
        getline(read1,name);
        read1>>price;
        if(price>max)
        {
            max = price;
            r1.setData(code, name, price);
        }
    }
    r1.update();
    return 0;
}