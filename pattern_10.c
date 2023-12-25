#include <stdio.h>

int main()
{
    char i, j, k, a;
    int b;
    printf("Enter a character for the pattern: ");
    scanf("%c", &a);

    // Print a right-aligned character pattern
    for (i = 'A'; i <= a; i++) // Rows, starting from 'A' up to the user input character
    {
        for (j = 1; j <= a - i; j++) // Print spaces for right alignment
            printf(" ");

        for (k = 'A', b = 0; k <= i; b++, k++) // Print characters in decreasing order
            printf("%c", i - b);

        printf("\n"); // Move to the next line
    }
}

