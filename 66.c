//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/


#include<stdio.h>

int main()
{
  int n,x;

printf("ENTER THE NUMBER OF ELEMENTS: \n");
scanf("%d",&n);

int i,a[n];

for(i=0;i<n;i++)
 scanf("%d",&a[i]);

printf("ENTER THE NUMBER YOU WANT TO INSERT: \n");
scanf("%d",&x);

int mid,pos,high=n-1,low=0;

while(low<=high)
{
   mid=(high+low)/2;

if(a[mid]<=x)
 low=mid+1;
else
{
  pos=mid; 
high=mid-1;

}
}
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
