#include <stdio.h>

// Function for Insertion Sort
void insertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function for Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;

        // Find the minimum element in the unsorted part
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the current element
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

// Main function
int main() {
    int n, i, choice;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // User selects sorting algorithm
    printf("Choose sorting algorithm:\n");
    printf("1. Insertion Sort\n");
    printf("2. Selection Sort\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    // Perform sorting based on user's choice
    switch (choice) {
        case 1:
            insertionSort(arr, n);
            printf("Sorted array using Insertion Sort: ");
            break;
        case 2:
            selectionSort(arr, n);
            printf("Sorted array using Selection Sort: ");
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    // Output the sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
