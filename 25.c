#include<stdio.h>

int main()
{
   int result,n1,n2;
   char ch;

   printf("ENTER NUMBER1: \n");
   scanf("%d",&n1);

    printf("ENTER NUMBER2: \n");
   scanf("%d",&n2);

    printf("ENTER ARITHMATIC OPERATOR: \n");
   scanf("%c",&ch);

   switch(ch)
{
   case '+':
     result=n1+n2;
     break;
 
  case '-':
     result=n1-n2;
     break;

 case '*':
     result=n1*n2;
     break;

 case '/':
     result=n1/n2;
     break;

 case '%':
     result=n1%n2;
     break;

default:
    printf("OPERATION NONE IDENTIFIED \n");

}

 printf("%d \n",result);
return 0;
}
