//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include<stdio.h>

int main(void)
{

   int n1,n2,temp;

   printf("ENTER THE NUMBER 1: \n");
   scanf("%d",&n1);

   printf("ENTER THE NUMBER 2: \n");
   scanf("%d",&n2);

   temp=n1;
   n1=n2;
   n2=temp;

   printf("NOW N1:%d \n NOW N2:%d \n",n1,n2);
return 0;
}
