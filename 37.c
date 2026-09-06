//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/


#include<stdio.h>

int main()
{
   int n1,n2,i,max;

printf("ENTER THE NUMBER: \n");
scanf("%d",&n1);

printf("ENTER THE NUMBER: \n");
scanf("%d",&n2);
max=n2;
for(i=2;i<=n2;i++)
{
  if(n1%i==0 && n2%i==0)
     {
          if(i<max)
             max=i;
     }

}

printf("LCF OF TWO GIVE NUMBER:%d \n",max);

return 0;
}
