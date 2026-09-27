//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include<stdio.h>

int main()
{
   int i,n1,n2;

printf("ENTER NUMBER OF ELEMENTS IN ARRAY1 :\n");
scanf("%d",&n1);

printf("ENTER NUMBER OF ELEMENTS IN ARRAY2 :\n");
scanf("%d",&n2);
 
int a1[n1],a2[n2];

printf("ENTER THE FIRST ARRAy ELEMENTS:\n");

for(i=0;i<n1;i++)
scanf("%d",&a1[i]);

printf("ENTER THE SECOND ARRAy ELEMENTS:\n");

for(i=0;i<n2;i++)
scanf("%d",&a2[i]);

int a3[n1+n2];

for(i=0;i<n1;i++)
    a3[i]=a1[i];

for(i=0;i<n2;i++)
   a3[n1+i]=a2[i];

for(i=0;i<n1+n2;i++)
printf("%d \n",a3[i]);

   return 0;
}
