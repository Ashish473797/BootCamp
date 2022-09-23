/*Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

#include<stdio.h>
int main()
{
    float n,amount=0,total=0;
    printf("Enter units: ");
    scanf("%f",&n);
    switch (n<=50)
    {
    case 1:
        amount = n*0.5;
        break;

    case 0:
        switch (n<=150) 
        {
        case 1:
            amount = 25 + (n-50)*0.75;
            break;

        case 0:    
            switch (n<=250)
            {
            case 1:
                amount = 100 + (n-150)*1.20;
                break;

            case 0:
                amount = 220 + (n-250)*1.50;
            break;  
            }
            break;
        }
        break;    
    }
    total = amount+amount*0.20;
    printf("Total amount is %.2f",total);
    return 0;
}