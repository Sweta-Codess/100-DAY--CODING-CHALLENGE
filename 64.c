//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include<stdio.h>

int main()
{
   long long num;
   int i,max=0,rem,count[10]={0};

printf("ENTER THE NUMBER: \n");
scanf("%lld",&num);

while(num>0)
{
  rem=num%10;
  count[rem]++;
  num=num/10;
}
int ans=0;
for(i=0;i<10;i++)
{
  if(count[i]>max)
{
   max=count[i];
   ans=i;
}

}
printf("%d",ans);

return 0;
}
