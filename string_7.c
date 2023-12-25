// C Program to print Array of strings without array of pointers
//by using predefined size of string, here there is a memory wastage or not proper utilization of space
#include <stdio.h>
int main()
{
	int i = 0;
	char str[3][10] = { "Geek", "Geeks", "Geekfor" };
	char* array[3] = {str[0],str[1],str[2]};
	printf("String array Elements are:\n");

	for ( i ; i < 3; i++) {
		printf("%d\n", array[i]);
	}

	return 0;
}
