//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include<stdio.h>

int main()
{
   int num;

   printf("ENTER THE NUMBER: \n");
   scanf("%d",&num);

   switch(num)
{
   case 1:
      printf("JANUARY,");
      printf(" 31 days \n");
      break;

   case 2:
      printf("FEBRUARY,");
      printf(" 28 days \n");
      break;

case 3:
      printf("MARCH,");
      printf(" 31 days \n");
      break;

case 4:
      printf("APRIL,");
      printf(" 30 days \n");
      break;

case 5:
      printf("MAY,");
      printf(" 31 days \n");
      break;

case 6:
      printf("JUNE,");
      printf(" 30 days \n");
      break;

case 7:
      printf("JULY,");
      printf(" 31 days \n");
      break;

case 8:
      printf("AUGUST,");
      printf(" 31 days \n");
      break;

case 9:
      printf("SEPTEMBER,");
      printf(" 30 days \n");
      break;

case 10:
      printf("OCTOBER,");
      printf(" 31 days \n");
      break;

case 11:
      printf("NOVEMBER,");
      printf(" 30 days \n");
      break;
case 12:
     printf("DECEMBER,");
     printf(" 31 days \n");
     break;

default:
    printf("MONTHSS");
    
}


return 0;
}
