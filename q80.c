Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main() 
{
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check whether multiplication is possible
    if (c1 != r2) 
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int a[r1][c1];
    int b[r2][c2];
    int c[r1][c2];

    // Taking input for first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Taking input for second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            scanf("%d", &b[i][j]); // Fixed: changed from &a[i][j] to &b[i][j]
        }
    }

    // Matrix multiplication
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            c[i][j] = 0; // Explicitly clearing garbage values
            for (k = 0; k < c1; k++) 
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j]; // Fixed: added missing semicolon
            }
        }
    }

    // Printing the resultant matrix
    printf("Resultant matrix:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}