#include <stdio.h>

int main()
{
    int i, j, a;

    // Print a descending number triangle
    for (i = 1; i <= 5; i++) // Rows
    {
        for (j = 1, a = 0; j <= i; j++) // Columns
        {
            printf("%d", i - a); // Print the number with decreasing values
            a++; // Increment 'a'
        }
        printf("\n"); // Move to the next line
    }
}
