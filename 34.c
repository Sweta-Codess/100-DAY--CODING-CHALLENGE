//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>
int main()
{
  int num,i,count=0;

printf("ENTER THE NUMBER: \n");
scanf("%d",&num);

for(i=2;i<num;i++)
{
  if(num%i==0)
  {
    count++;
    break;
  }

}
if(count!=0)
printf("%d is not the prime number \n",num);
else
printf("%d is Prime number \n",num);

return 0;
}
