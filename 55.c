//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include<stdio.h>

int main()
{
   int n;

   printf("ENTER THE VALUE OF N: \n");
   scanf("%d",&n);

 int i,k,count=0;


for(i=2;i<=n;i++)
{
   count=0;
   for(k=2;k<i;k++)
    {  
        if(i%k==0)
        count++;
    }
if(count==0)
printf("%d\t",i);

}
return 0;
}
