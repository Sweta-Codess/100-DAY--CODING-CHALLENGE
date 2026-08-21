//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>
 int main()
{
   int n1,n2,n3;

   printf("ENTER THE NUM1: \n");
   scanf("%d",&n1);
 
   printf("ENTER THE NUM2: \n");
   scanf("%d",&n2);

   printf("ENTER THE NUM3: \n");
   scanf("%d",&n3);
 
    if(n1>n2 && n1>n3)
         printf("%d is the greatest number \n",n1);
    else if(n2>n1 && n2>n3)
         printf("%d is the greatest number \n",n2);
    else
         printf("%d is the greatest number \n",n3);


return 0;
}
