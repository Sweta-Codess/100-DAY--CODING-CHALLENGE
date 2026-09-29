//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include<stdio.h>

int main()
{
   int i,j,r,c,sum=0;

printf("ENTER THE NUMBER OF ROWS AND COLOUMNS: \n");
scanf("%d %d",&r,&c);

printf("ENTER THE ELEMENTS: \n");

int a[r][c];

for(i=0;i<r;i++)
{
   for(j=0;j<c;j++)
   {
      scanf("%d ",&a[i][j]);
   }

}

for(i=0;i<r;i++)
{
   for(j=0;j<c;j++)
   {
      sum=sum+a[i][j];
   }

}

printf("SUM OF ALL ELEMENTS: %d \n",sum);
return 0;
}
