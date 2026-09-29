//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include<stdio.h>

int main()
{
   int r,c,i,j;

   printf("ENTE THE NUMBER OF ROWS AND COLOUMNS: \n");
   scanf("%d %d",&r,&c);

   int a[r][c],count=0;

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
            {
            if(a[i][j]==a[i+1][j+1])
               count++;
               break;
}
       }
    }

if(count==1)
  printf("false \n");
else
   printf("true \n");

return 0;
}
