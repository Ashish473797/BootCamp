//C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main()
{
    double root1,root2,realpart,img_part,a,b,c,dis;
    printf("Enter value for a,b and c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    dis = (b*b)-(4*a*c);
    switch (dis>0)
    {
    case 1:
        root1 = (-b + sqrt(dis))/(2*a);
        root2 = (-b - sqrt(dis))/(2*a);
        printf("roots are %.2lf and %.2lf",root1,root2);
        break;
    
    case 0:
        switch(dis<0)
        {
            case 1:
            realpart = -b/(2*a);
            img_part = sqrt(-dis)/(2*a);
            printf("roots are %.2lf+%.2lfi and %.2lf-%.2lfi",realpart,img_part,realpart,img_part);

            case 0:
               switch(dis==0)
               {
                   case 1:
                   root1= -b/(2*a);
                   printf("roots are %.2lf and %.2lf",root1,root1);

               }break;
        }break;
    default:
    printf("invalid input");    
    }
    return 0;
}