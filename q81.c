//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include<stdio.h>

int main()
{
    char str[100];
 int i,count=0;

    printf("ENTER THE STRING: \n");
    scanf("%99[^\n]",str);

    for(i=0;str[i]!='\0';i++)
    count++;

    printf("NUMBER OF ELEMEnts: %d \n",count);
   return 0;

}