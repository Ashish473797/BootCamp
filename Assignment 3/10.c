//Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage
#include<stdio.h>
int main()
{
    int cost,sell;
    float profit,loss;
    float totalProfit,totalLoss;
    printf("Enter cost price and sell price: ");
    scanf("%d%d",&cost,&sell);
    if(sell == cost)
    printf("no profit no loss");
    if(sell>cost)
    {
        profit = sell - cost;
        totalProfit = (profit/cost)*100;
        printf("profit is %f",totalProfit);
    }
    else if(sell<cost)
    {
        loss = cost - sell;
        totalLoss = (loss/cost)*100;
        printf("loss is %f",totalLoss);
    }
    return 0;
}