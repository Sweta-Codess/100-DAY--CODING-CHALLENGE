#include<stdio.h>
int main(void)
{ 
    int n1,n2,sum,diff,mul,div;

     printf("ENTER NUMBER1: \n");
      scanf("%d",&n1);

     printf("ENTER NUMBER2: \n");
      scanf("%d",&n2);

      sum=n1+n2;
      diff=n1-n2;
      mul=n1*n2;
      div=n1/n2;

     printf("THE SUM OF TWO NUMBERS:%d \n",sum);
     printf("THE SUM OF TWO NUMBERS:%d \n",diff);
     printf("THE SUM OF TWO NUMBERS:%d \n",mul);
    printf("THE SUM OF TWO NUMBERS:%d \n",div);

   return 0;
}
