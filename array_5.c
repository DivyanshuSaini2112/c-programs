#include <stdio.h>

int main() {
    in/ setting flag
    int n, i, t found = 0; /key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n]; // declare array after getting the number of elements

    // Input elements into the array
    for (i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &a[i]); // entered data items
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key); // data to be searched

    // Search for the key in the array
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            found = 1; // set flag to indicate element found
            break; // exit loop if element is found
        }
    }

    // Print result based on whether element is found or not
    if (found == 1) {
        printf("Element found at position %d\n", i + 1); // position is 1-based index
    } else {
        printf("Element not found\n");
    }

    return 0;
}
