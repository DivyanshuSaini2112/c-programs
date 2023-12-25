#include <stdio.h>

int main() {
    int i, j, k, a;
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &a);

    // Print an inverted right-aligned asterisk pattern
    for (i = a; i >= 1; i--) { // Rows, starting from the user input value and going down
        for (j = 1; j <= a - i; j++) // Right-align with spaces
            printf(" ");

        for (k = a; k >= 1; k--) // Print asterisks
            printf("*");

        printf("\n"); // Move to the next line
    }
}


/*

*****
 *****
  *****
   *****
    *****
*/





