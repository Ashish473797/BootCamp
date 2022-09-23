//Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct time
{
    int hour,minut,second;
};
void diff_between_time(struct time start, struct time end, struct time *diff)
{
    while(start.second>end.second)
    {
        --end.minut;
        end.second += 60;
    }
    diff->second = end.second-start.second;
    while(start.minut>end.minut)
    {
        --end.hour;
        end.minut += 60;
    }
    diff->minut = end.minut-start.minut;
    diff->hour = end.hour-start.hour;
}
int main()
{
    struct time start_time, end_time, diff;
    printf("\nEnter start time in hh:mm:ss - ");
    scanf("%d:%d:%d",&start_time.hour,&start_time.minut,&start_time.second);
    printf("\nEnter End time in hh:mm:ss - ");
    scanf("%d:%d:%d",&end_time.hour,&end_time.minut,&end_time.second);

    diff_between_time(start_time, end_time, &diff);

    printf("\ndifference is %d:%d:%d",diff.hour,diff.minut,diff.second);
}