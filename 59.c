//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

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
int eve=0,odd=0;

for(i=1;i<=n;i++)
{
   if(name[i]%2==0)
        eve++;
    else
         odd++;
}
printf("EVEN:%d ODD:%d \n",eve,odd);


return 0;
}
