//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include<stdio.h>

int main()
{
  int i,j,r,c;

   printf("ENTER THE NUMBER OF ELEMENTS: \n");
   scanf("%d %d",&r,&c);

  int a[r][c];

  for(i=0;i<r;i++)
  {
     for(j=0;j<c;j++)
     {
         scanf("%d ",&a[i][j]);

     }

  }

int sum=0;

for(i=0;i<r;i++)
  {
     for(j=0;j<c;j++)
     {
         sum=sum+a[i][j];

     }
   
       printf("SUM OF ROWS:%d \n",sum);
           sum=0;  
}

return 0;
}
