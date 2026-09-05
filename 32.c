//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

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

if(rev==temp)
    printf("%d is PALINDROME NUMBER \n",temp);
else
    printf("%d is not a PALINDROME NUMBER \n",temp);

return 0;
}

