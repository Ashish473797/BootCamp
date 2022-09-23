/*Given a list of words followed by two words, the task is to find the minimum distance 
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
 word1 = “the”, word2 = “fox”, OUTPUT : 2 )
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[5][20],word1[20],word2[20];
    printf("Enter 5 strings:-\n");
    for(int i=0;i<5;i++)
    gets(str[i]);
   
    printf("Enter two words from them to find minimum distance:-\n");
    gets(word1);
    gets(word2);
    int first=0,second=0; 
    for(int i=0;i<5;i++)
    {
        if(strcmp(word1,str[i])==0)
        {
            first = i;
        }
        if(strcmp(word2,str[i])==0)
        {
            second = i;
        }
    }
    printf("diference is %d",abs(first-second)-1);
    return 0;
}