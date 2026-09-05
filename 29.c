//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>
 
  int main()
  {
      int fact=1,num,i;
 
     printf("ENTER THE NUMBER: \n");
     scanf("%d",&num);
    for(i=1;i<=num;i++)
 {
   fact=fact*i;
 }

   if(num<0)
      printf("N MUST BE NON NEGATIVE INTEGER \n");
 else
   printf("FACTORIAL OF THE NUMBER %d :",fact);

}
