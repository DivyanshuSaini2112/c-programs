// C program to illustrate the use of array of pointers to
// characters
#include <stdio.h>

int main()
{
	int i = 0;
	char* arr[5] = { "geekdivyasnhu", "Geeks", "Geeksfor" };

	for ( i = 0; i < 5; i++) {
		printf("%p\n", &arr[i]);
	}

	return 0;
}

