#include <stdio.h>

int main()
{
    int i, j;

    // Print a number triangle
    for (i = 1; i <= 5; i++) // Rows
    {
        for (j = 1; j <= i; j++) // Columns
        {
            printf("%d", i); // Print the number 'i'
        }
        printf("\n"); // Move to the next line
    }
}
