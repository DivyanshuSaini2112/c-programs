#include <stdio.h>

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int i,arr[size];

    printf("Enter %d elements of the array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int position = -1;
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        printf("Element found at index %d.\n", position);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

