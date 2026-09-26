//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

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
int pos=0,neg=0,zero=0;

for(i=1;i<=n;i++)
{
   if(name[i]>0)
        pos++;
    else if(name[i]<0)
         neg++;
     else
        zero++;
}
printf("+ve:%d -ve:%d ZERO:%d \n",pos,neg,zero);


return 0;
}
