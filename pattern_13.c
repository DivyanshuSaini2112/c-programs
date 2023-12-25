#include <stdio.h>

int main() {
    int i, j, a, n = 1;
    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &a);

    // Generate and print Floyd's Triangle
    for (i = 1; i <= a; i++) { // Rows
        for (j = 1; j <= i; j++) // Print numbers with incrementing values
            printf(" %d ", n++);

        printf("\n"); // Move to the next line
    }
}

