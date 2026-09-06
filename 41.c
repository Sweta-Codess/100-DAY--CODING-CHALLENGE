//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main()
{
    int n, first, last, digits = 1, temp, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = n / digits;

    n = n % digits;
    n = n / 10;

    result = last * digits + n * 10 + first;

    printf("After swapping = %d", result);

    return 0;
}
