#include <stdio.h>

int main() {
    int i, j, k, a;
    printf("Enter the side length of the triangle: ");
    scanf("%d", &a);

    // Print a hollow right-angled triangle pattern
    for (i = 1; i <= a; i++) { // Rows
        for (j = 1; j <= a - i; j++) // Right-align with spaces
            printf(" ");

        for (k = 1; k <= 2 * i - 1; k++) { // Columns
            if (i == a || k == 1 || k == 2 * i - 1) {
                printf("*"); // Print asterisk for boundary
            } else {
                printf(" "); // Print space for the inside
            }
        }

        printf("\n"); // Move to the next line
    }
}
