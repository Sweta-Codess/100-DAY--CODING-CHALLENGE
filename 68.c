//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include<stdio.h>
int main()
{
int n,i,pos;

printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: \n");
scanf("%d",&n);

printf("ENTER THE ELEMENTS: \n");

int a[n];

for(i=0;i<n;i++)
scanf("%d",&a[i]);


printf("ENTER THE POSITION: \n");
scanf("%d",&pos);


for(i=pos;i<n-1;i++)
{
    a[i+1]=a[i];
}

n--;

for(i=0;i<n;i++)
printf("%d",a[i]);

return 0;
}
