//Define a function to print Pascal Triangle up to N lines.
#include<iostream>
#include<iomanip>
using namespace std;

int fac(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fac(n-1);
}

int Combination(int n,int r)
{
    if(n==0 && r==0)
        return 1;
    return fac(n)/(fac(n-r)*fac(r));
}

void pascal(int n)
{
    int x=0,y;
    for(int i=1;i<=n;i++)
    {
        y=0;
        for(int j=1;j<=(2*n)-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i)
            {
                if(n%2!=0)
                {
                    if(i%2==0 && j%2==0 || i%2!=0 && j%2!=0)
                    {
                        cout<<setw(3)<<Combination(x,y);
                        y++;
                    }
                    else
                        cout<<setw(3)<<" ";
                }
                else
                {
                    if(i%2!=0 && j%2==0 || i%2==0 && j%2!=0)
                    {
                        cout<<setw(3)<<Combination(x,y);
                        y++;
                    }
                    else
                        cout<<setw(3)<<" ";   
                }
            }
            else
            cout<<setw(3)<<" ";
        }
        x++;
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter number of line for pascal triangle: ";
    cin>>n;
    pascal(n);
    return 0;
}