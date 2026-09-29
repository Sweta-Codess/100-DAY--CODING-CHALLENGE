//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include<stdio.h>

int main()
{
   int r,c,i,j;

  printf("ENTER THE NUMBER OF ROWS AND COLOUMNS: \n");
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
             if(a[i][j]!=a[j][i])
                  count++;
         }

      }
 
  
if(count==0)
 printf("SYMMETRIC MATRIX \n");
else
printf("NOT SYMMETRIC \n");

return 0;
}
