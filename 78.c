//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include<stdio.h>

int main()
{
   int r,c,i,j;

   printf("ENTE THE NUMBER OF ROWS AND COLOUMNS: \n");
   scanf("%d %d",&r,&c);

   int a[r][c],sum=0;

   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
            scanf("%d",&a[i][j]);
       }
    }


   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
          if(i==j)
            sum=sum+a[i][j];
        }
    }
printf("SUM OF DIAGIONAL ELEMENTS:%d \n",sum);

return 0;
}
