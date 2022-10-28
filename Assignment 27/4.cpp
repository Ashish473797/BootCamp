/*Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.*/
#include <iostream>
#include <stdio.h>
using namespace std;
class Time
{
    int hour = 0, minut = 0, second = 0;

public:
    void normalize()
    {
        while (second > 60)
        {
            second = second - 60;
            minut = minut + 1;
        }
        while (minut > 60)
        {
            minut = minut - 60;
            hour = hour + 1;
        }
    }
    bool operator==(Time t)
    {
        if (hour == t.hour && minut == t.minut && second == t.second)
            return true;
        return false;
    }
    friend istream &operator>>(istream &, Time &);
    friend ostream &operator<<(ostream &, Time);
};
istream &operator>>(istream &input, Time &t)
{
    cout << "Enter time: ";
    input >> t.hour;
    input >> t.minut;
    input >> t.second;
    return input;
}
ostream &operator<<(ostream &output, Time t)
{
    t.normalize();
    output << t.hour << " : " << t.minut << " : " << t.second << endl;
    return output;
}
int main()
{
    Time t1, t2, t3;

    cin >> t1 >> t2 >> t3;

    cout << t1 << t2 << t3;

    if (t1 == t2)
        cout << "both time are equal";
    else
        cout << "not equal";
    return 0;
}