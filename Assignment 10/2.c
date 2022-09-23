#include<stdio.h>
float simpleInterest(int p,int t,int r)
{
  return p*t*r/100;
}
int main()
{
  int P,T,R;
  printf("enter principle P(investement) for time t(in year) with rate r(in %%)\n");
  scanf("%d%d%d",&P,&T,&R);
  float SI = simpleInterest(P,T,R);
  printf("SI is %.2f",SI);  
  return 0;  
}