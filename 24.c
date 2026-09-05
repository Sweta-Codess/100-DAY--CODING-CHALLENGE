#include<stdio.h>

int main()
{
   int units,pr;

     printf("ENTER THE NUMBER OF UNITS CONSUMED: \n");
     scanf("%d",&units);

   if(units<=100)
      pr=units*5;
   else if(units>100 && units<=200)
     pr=(100*5)+(units-100)*7;
  else if(units>200 && units<=300)
    pr=(100*5)+(100*7)+(units-200)*10;
  else 
    pr=(100*5)+(100*7)+(100*10)+(units-300)*12;

 printf("BILL: %d \n",pr);

return 0;
}
