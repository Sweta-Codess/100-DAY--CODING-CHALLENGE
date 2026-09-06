//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include<stdio.h>

int main()
{
   int rem,num,temp,sum=0;

   printf("ENTER A NON-NEGATIVE INTEGER: \n");
   scanf("%d",&num);

  temp=num;
if(num<0)
{
   num=-num;
}
   while(num>0)
{
   rem=num%10;
   sum=sum+rem;
   num=num/10;
}

printf("%d,SUM OF DIGITS: \n",sum);
return 0;
}
