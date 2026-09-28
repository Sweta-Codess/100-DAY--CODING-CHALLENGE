//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include<stdio.h>
int main()
{
int n,i,pos,x;

printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: \n");
scanf("%d",&n);

printf("ENTER THE ELEMENTS: \n");

int a[n];

for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("ENTER THE NUMBER U WANT TO INSERT: \n");
scanf("%d",&x);

printf("ENTER THE POSITION: \n");
scanf("%d",&pos);


for(i=n;i>pos;i--)
{
    a[i]=a[i-1];
}

a[pos]=x;
n++;

for(i=0;i<n;i++)
printf("%d",a[i]);

return 0;
}
