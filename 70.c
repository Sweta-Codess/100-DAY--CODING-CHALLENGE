//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include<stdio.h>

int main()
{
  int n,i,k;

printf("ENTER THE ELEMENTS IN THE ARRAY: \n");
scanf("%d",&n);

int a[n];

for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("ENTER THE VALUE OF K: \n");
scanf("%d",&k);

int j,l;

k=k%n;

for(j=0;j<k;j++)
{
  int last=a[n-1];

   for(l=n-1;l>0;l--)
{
   a[l]=a[l-1];

}

a[0]=last;
}

for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
