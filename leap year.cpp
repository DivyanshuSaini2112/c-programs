#include <stdio.h>

int main() {
    int a;
    int i = 1;
    printf("Enter a year:\n");
    scanf("%d",&a);
    printf("All leap years are:\n");
    do {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            printf("%d\n", i);
        }
        i++;
    } 
	while (i <= a);
}

	
