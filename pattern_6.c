#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter a number: ");
	scanf("%d",&n);

    // Print a descending asterisk pattern
    for (i = n; i >= 1; i--) // Rows, starting from the user input value
    {
        for (j = i; j >= 1; j--) // Columns, decreasing values of 'i'
        {
            printf("*"); // Print an asterisk
        }
        printf("\n"); // Move to the next line
    }
}

