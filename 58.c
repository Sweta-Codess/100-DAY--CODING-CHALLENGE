//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

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
int max=0,min=999;

for(i=1;i<=n;i++)
{
   if(name[i]>max)
      max=name[i];
    if(name[i]<min)
        min=name[i];


}
printf("MAX:%d MIN:%d \n",max,min);


return 0;
}

