#include<stdio.h>

int main()
{
   float cost,sell,profit;

   printf("ENTER THE COST PRICE: \n");
   scanf("%f",&cost);

   printf("ENTER THE SELLING PRICE: \n");
   scanf("%f",&sell);

   profit=((sell-cost)/cost)*100;
   
    if(profit<0)
         printf("LOSS ,%f%% \n",profit);
    else if(profit==0)
         printf("NO PROFIT NO LOSS \n");
    else
         printf("PROFIT ,%f%% \n",profit);

return 0;
}
