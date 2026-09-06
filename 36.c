//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include<stdio.h>

int main()
{
   int n1,n2,i,max=1;

printf("ENTER THE NUMBER: \n");
scanf("%d",&n1);

printf("ENTER THE NUMBER: \n");
scanf("%d",&n2);

for(i=1;i<=n2;i++)
{
  if(n1%i==0 && n2%i==0)
     {
          if(i>max)
             max=i;
     }

}

printf("HCF OF TWO GIVE NUMBER:%d \n",max);

return 0;
}
