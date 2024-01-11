#include <stdio.h>

int main()
{
    int i, j, k = 5;

    // Print a number triangle
    for (i = 1; i <= 5; i++) // Rows
    {
        for (j = 1; j <= i; j++) // Columns
        {
            printf("%d", j); // Print the number 'i'
        }
        printf("\n"); // Move to the next line
    }
}
