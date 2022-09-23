/*Write a function to reverse a string word wise. (For example if the given string is 
“Mysirg Education Services” then the resulting string should be “Services Education 
Mysirg”)*/
#include<stdio.h>
void reverse(char str[],int start,int end)
{
    int temp;
    int i=start,j=end;
    for(i;i<=j;i++)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
}
int main()
{
    char str[50];
    printf("Enter string: ");
    gets(str);

    int start=0, end=0;
    int i=0; 
    for(i;str[i];i++)
    {
        if(str[i]==32)
        {
            end = i-1;
            reverse(str,start,end);
            start = i+1;
        }
    }
    reverse(str,start,i-1);
    reverse(str,0,i-1);
    printf("%s",str);
    return 0;
}