//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include<stdio.h>
int main()
{

  int n,i,sum=0;

printf("ENTER THE VALIE OF N: \n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  if(i%2!=0)
  sum=sum+i;

}

 printf("SUM OF ALL ODD NUMBERS: %d \n",sum
);

return 0;
}
