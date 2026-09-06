//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include<stdio.h>

int main()
{
   int n,i;
   float a,b,sum=1;

  printf("ENTER THE NUMBER OF TERMS: \n");
  scanf("%d",&n);

  for(i=2;i<=n;i++)
{
   b=(2*i)-1;
   a=2*i;

sum=sum+(b/a);

}

printf("SUM OF N TERMS: %.1f \n",sum);

return 0;
}
