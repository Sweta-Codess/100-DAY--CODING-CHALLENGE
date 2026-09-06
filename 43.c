//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>

int main()
{
   int rem,num,temp,sum=0,fact=1,i;

   printf("ENTER A NON-NEGATIVE INTEGER: \n");
   scanf("%d",&num);

  temp=num;

   while(num>0)
{ 
   fact=1;
   rem=num%10;
   for(i=1;i<=rem;i++)
      fact=fact*i;

   sum=sum+fact;
   num=num/10;
}

if(sum==temp)
    printf("%d is STRONG NUMBER \n",temp);
else
    printf("%d is not a STRONG NUMBER \n",temp);

return 0;
}

