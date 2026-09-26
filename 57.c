//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/


#include<stdio.h>

int main()
{
   int i,n;

printf("ENTER THE NUMBER OF ELEMENTS: \n");
scanf("%d",&n);

int name[n];

for(i=1;i<=n;i++)
{
   scanf("%d",&name[i]);

}
int sum=0;

for(i=1;i<=n;i++)
{
   sum=sum+name[i];
   

}
printf("SUM OF THE ELEMENTS:%d \n",sum);


return 0;
}
