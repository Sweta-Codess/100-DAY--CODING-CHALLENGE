//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include<stdio.h>
int main()
{
   int n,i;
float sum=0.0;

  printf("ENTER THE NUMBER OF TERMS: \n");
  scanf("%d",&n);

float a,b=3.0;

  for(i=1;i<=n;i++)
{
   a=2*i;
   sum=sum+(a/b);
   b=b+4;

}

printf("SUM OF THE N TERMS:%.1f \n",sum);

return 0;
}
