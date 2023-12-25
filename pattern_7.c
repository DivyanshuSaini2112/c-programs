#include <stdio.h>

int main()
{
    int i, j;
    printf("Enter a number for the pattern: ");
    scanf("%d", &i);

    // Print a number triangle in decreasing order
    for (; i >= 1; i--) // Rows, starting from the user input value
    {
        for (j = 1; j <= i; j++) // Columns, from 1 to 'i'
        {
            printf("%d", j); // Print the numbers
        }
        printf("\n"); // Move to the next line
    }
}

