#include <stdio.h>

int main() {
    int i, j, a, b;
    printf("Enter length: ");
    scanf("%d", &a);
    printf("Enter width: ");
    scanf("%d", &b);

    // Print a hollow rectangle pattern
    for (i = 1; i <= a; i++) { // Rows
        for (j = 1; j <= b; j++) { // Columns
            if (i == 1 || i == a || j == 1 || j == b) {
                printf("*"); // Print asterisk for boundary
            } else {
                printf(" "); // Print space for the inside
            }
        }
        printf("\n"); // Move to the next line
    }
}

