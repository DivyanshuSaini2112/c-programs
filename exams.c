#include <stdio.h>

// Function to generate a magic square of odd order
void generateMagicSquare(int n) {
    int magicSquare[n][n];
    int num = 1;
    int i, j;

    // Initialize all cells of magic square with 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }

    // Set the position for the first number
    i = n / 2;
    j = n - 1;

    // One by one put all values in the magic square
    for (int k = 1; k <= n * n; k++) {
        magicSquare[i][j] = k;

        // Move to the next cell
        i--;
        j++;

        // Wrap around if needed
        if (i == -1 && j == n) {
            j = n - 2;
            i = 0;
        } else {
            // Wrap around column-wise if needed
            if (j == n) {
                j = 0;
            }
            // Wrap around row-wise if needed
            if (i < 0) {
                i = n - 1;
            }
        }

        // If cell is already filled
        if (magicSquare[i][j] != 0) {
            j -= 2;
            i++;
        }
    }

    // Print the magic square
    printf("The Magic Square for order %d is:\n\n", n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", magicSquare[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int order;

    // Input the order of the magic square (must be odd)
    printf("Enter the order of the magic square (must be odd): ");
    scanf("%d", &order);

    if (order % 2 == 0) {
        printf("Order must be odd.\n");
        return 1;
    }

    // Generate and print the magic square
    generateMagicSquare(order);

    return 0;
}
