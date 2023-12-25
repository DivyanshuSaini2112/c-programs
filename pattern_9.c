#include <stdio.h>

int main()
{
    int i, j, k, a;
    printf("Enter a number for the pattern: ");
    scanf("%d", &a);

    // Print a right-aligned number triangle
    for (i = 1; i <= a; i++) // Rows, starting from 1 up to the user input value
    {
        for (j = 1; j <= a - i; j++) // Print spaces for right alignment
            printf(" ");

        for (k = 1; k <= i; k++) // Print the numbers
            printf("%d", k);

        printf("\n"); // Move to the next line
    }
}

