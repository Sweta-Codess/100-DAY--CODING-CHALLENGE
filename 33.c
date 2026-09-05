//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
#include<math.h>
int main()
{
   int i,n,rem,sum=0,temp;

printf("ENTER THE NUMBER: \n ");
scanf("%d",&n);

temp==n;

while(n>0)
{
  rem=n%10;
  i++;
  sum=sum+(math.pow(rem,i));
  n=n/10;
}

if(temp==sum)
printf("%d is ARMSTRONG NUMBER: \n",temp);
else
printf("%d is NOT ARMSTRONG NUMBER: \n",temp);
return 0;
}
