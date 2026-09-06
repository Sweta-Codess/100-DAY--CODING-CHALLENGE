//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include<stdio.h>

int main()
{
   float n,ans;

printf("ENTER THE BINARY NUMBER: \n");
scanf("%f",&n);

ans=1111-n;

printf("1's COMPLIMENT FOR %f is %f",n,ans);

return 0;
}
