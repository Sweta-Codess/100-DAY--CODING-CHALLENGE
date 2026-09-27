//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include<stdio.h>

int main()
{
  int n;
   printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: \n");
   scanf("%d",&n);

   int a[n];
   int i;
printf("ENTER ELEMENTS FOR THE FIRST ARRAY: \n");

 for(i=0;i<n;i++)
scanf("%d",&a[i]);
int x;

printf("ENTER THE ELEMENT YOU WANT TO FIND: \n");
scanf("%d",&x);

int high=n-1,low=0;
int mid;



   while(low<=high)
{
   mid=(high+low)/2;

  if(a[mid]==x)
     {
          printf("FOUND AT INDEX:%d \n",mid);
          return 0;
     }
   else if(x<a[mid])
       high=mid-1;
   else
      low=mid+1;
}
printf("-1");
return 0;

}
