//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include<stdio.h>

int main()
{
   int rem,num,temp,rev,sum;

   printf("ENTER A NON-NEGATIVE INTEGER: \n");
   scanf("%d",&num);

  temp=num;

   while(num>0)
{
   rem=num%10;
   rev=rev*10+rem;
   num=num/10;
}

    printf("%d REVERSE NUMBER WILL BE %d \n",temp,rev);

return 0;
}
