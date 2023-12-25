#include <stdio.h>

int main() {
    int i, j, k, a;
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &a);

    // Print a right-aligned diamond pattern of asterisks
    for (i = 1; i <= a; i++) { // Rows, starting from 1 up to the user input value
        for (j = 1; j <= a - i; j++) // Right-align with spaces
            printf(" ");

        for (k = 1; k <= 2 * i - 1; k++) // Print asterisks
            printf("*");

        printf("\n"); // Move to the next line
    }
}

