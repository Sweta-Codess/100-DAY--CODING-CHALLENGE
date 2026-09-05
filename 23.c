#include<stdio.h>
int main()
{
  int pr,days;

  printf("ENTER THE NUMBER OF DAYS EXCEDEED:");
  scanf("%d",&days);

  if(days<=5)
     pr=days*2;
 else if(days>5 && days<=10)
    pr=5*2+(days-5)*4;
else if(days>10 && days<=20)
    pr=(5*2)+(5*4)+(days-10)*6;
else
{
    printf("MEMBERSHIP CANCELLED \n");
    pr=0;
}

printf("FINE rupees %d \n",pr);
return 0;
}
