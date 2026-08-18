//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<stdio.h>

int main(void)
{
    int c;
    float f;

   printf("ENTER TEMPERATURE IN CELSIUS: \n");
   scanf("%d",&c);


   f=(c*1.8)+32;

   printf("FARENHEIT:%f \n",f);


return 0;
}
