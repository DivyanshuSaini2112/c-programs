#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle:\n ");
    printf("length 1:\n");
    scanf("%d", &side1);
    printf("length 2:\n");
    scanf("%d", &side2);
    printf("length 3:\n");
    scanf("%d", &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is an equilateral triangle.\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is an isosceles triangle.\n");
        } else {
            printf("The triangle is a scalene triangle.\n");
        }
    } else {
        printf("The given side lengths cannot form a triangle.\n");
    }

    return 0;
}
