//Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>

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
                        printf("%3d",Combination(x,y));
                        y++;
                    }
                    else
                        printf("   ");
                }
                else
                {
                    if(i%2!=0 && j%2==0 || i%2==0 && j%2!=0)
                    {
                        printf("%3d",Combination(x,y));
                        y++;
                    }
                    else
                        printf("   ");    
                }
            }
            else
            printf("   ");
        }
        x++;
        printf("\n");
    }
}

int main()
{
    int n;
    printf("enter line for pascal triangle: ");
    scanf("%d",&n);
    pascal(n);
    return 0;
}