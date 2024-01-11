#include <stdio.h>

// Function prototypes
unsigned long long factorial(int num);
void inputArray(int arr[3][3]);
void multiplyArrays(int arr1[3][3], int arr2[3][3], int result[3][3]);

// Function to calculate factorial of a number
unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to take a 3x3 array from the user
void inputArray(int arr[3][3]) {
    printf("Enter elements of the 3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to perform matrix multiplication
void multiplyArrays(int arr1[3][3], int arr2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main() {
    int array[3][3];
    int result[3][3];

    // Taking input for the first 3x3 array
    inputArray(array);

    // Calculating factorial of the first 3x3 array
    // Factorial of each element is calculated and stored in the same array positions
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = factorial(array[i][j]);
        }
    }

    // Multiplying the array with itself (Matrix multiplication)
    multiplyArrays(array, array, result);

    // Printing the resultant 3x3 array after matrix multiplication
    printf("Resultant array after matrix multiplication:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Function implementations
// factorial(), inputArray(), and multiplyArrays() functions are implemented here
