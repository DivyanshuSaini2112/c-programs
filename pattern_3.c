#include <stdio.h>

int main()
{
    char i, j;

    // Print a character triangle
    for (i = 'A'; i <= 'E'; i++) // Rows
    {
        for (j = 'A'; j <= i; j++) // Columns
        {
            printf("%c", j); // Print the character 'j'
        }
        printf("\n"); // Move to the next line
    }
}
