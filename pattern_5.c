#include <stdio.h>

int main()
{
    int i, j;

    // Print a descending number triangle
    for (i = 5; i >= 1; i--) // Rows, starting from 5
    {
        for (j = i; j >= 1; j--) // Columns, decreasing values of 'i'
        {
            printf("%d", i); // Print the number 'i'
        }
        printf("\n"); // Move to the next line
    }
}
