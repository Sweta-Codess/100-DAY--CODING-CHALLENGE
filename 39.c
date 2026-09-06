//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include<stdio.h>

int main()
{
   int rem,num,temp,pro=1;

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
   if(rem%2!=0)
      pro=pro*rem;
   num=num/10;
}

printf("%d,PRODUCT OF ODD DIGITS: \n",pro);
return 0;
}
