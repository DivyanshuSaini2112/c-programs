#include <stdio.h>

int main() {
    int i, j, k, a;
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &a);

    // Print a right-aligned number pattern with increasing values
    for (i = 1; i <= a; i++) { // Rows
        for (j = 1; j <= a - i; j++) // Right-align with spaces
            printf(" ");

        for (k = 1; k <= i; k++) // Print the numbers
            printf("%d", i);

        printf("\n"); // Move to the next line
    }
}

