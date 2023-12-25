// C program to demonstrate the use of array of pointers
#include <stdio.h>

int main()
{
	// declaring some temp variables
	int var1 = 10;
	int var2 = 20;
	int var3 = 30;
	int i;
	// array of pointers to integers
	int* ptr_arr[3] = { &var1, &var2, &var3 };

	// traversing using loop
	for (i = 0; i < 3; i++) {
		printf("Value of var%d: %d\tAddress: %p\n", i + 1, *ptr_arr[i], ptr_arr[i]);
	}
	
		for (i = 0; i < 3; i++) {
		printf("Value of var%d: %d\tAddress: %u\n", i + 1, *ptr_arr[i], ptr_arr[i]);
	}

	return 0;
}

