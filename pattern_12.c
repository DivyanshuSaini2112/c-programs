#include <stdio.h>

int main() {
    int i, j, k, a, b;
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &a);

    // Print a right-aligned number pattern with decreasing values
    for (i = 1; i <= a; i++) { // Rows
        for (j = 1; j <= a - i; j++) // Right-align with spaces
            printf(" ");

        for (k = 1, b = 0; k <= i; b++, k++) // Print the numbers in decreasing order
            printf("%d", i - b);

        printf("\n"); // Move to the next line
    }
}

