#include <stdio.h>

// Function declarations
void createArray(int arr[], int n);
void displayArray(int arr[], int n);
int insertElement(int arr[], int n, int elem, int pos);
int deleteElement(int arr[], int n, int pos);

int main() {
    int arr[100], n = 0, choice = 0, elem, pos;

    while (choice != 5) {  // Continue until the user chooses to exit
        // Display menu
        printf("\nArray Operations Menu:\n");
        printf("1. Create an Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of elements: ");
                scanf("%d", &n);
                createArray(arr, n);
                break;
            case 2:
                if (n > 0) {
                    displayArray(arr, n);
                } else {
                    printf("Array is not created yet! Please create the array first.\n");
                }
                break;
            case 3:
                if (n > 0) {
                    printf("Enter the element to insert: ");
                    scanf("%d", &elem);
                    printf("Enter the position to insert the element (1 to %d): ", n + 1);
                    scanf("%d", &pos);
                    n = insertElement(arr, n, elem, pos);
                } else {
                    printf("Array is not created yet! Please create the array first.\n");
                }
                break;
            case 4:
                if (n > 0) {
                    printf("Enter the position to delete the element (1 to %d): ", n);
                    scanf("%d", &pos);
                    n = deleteElement(arr, n, pos);
                } else {
                    printf("Array is not created yet! Please create the array first.\n");
                }
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}

// Function to create an array of n elements
void createArray(int arr[], int n) {
    printf("Enter %d integer elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to display the elements of the array
void displayArray(int arr[], int n) {
    printf("\nArray Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a given position
int insertElement(int arr[], int n, int elem, int pos) {
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return n;
    }
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = elem;
    printf("Element inserted successfully.\n");
    return n + 1;
}

// Function to delete an element at a given position
int deleteElement(int arr[], int n, int pos) {
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return n;
    }
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Element deleted successfully.\n");
    return n - 1;
}
