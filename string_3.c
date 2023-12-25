#include <stdio.h>
#include <string.h>

int main()
{
	int i, a, b, c;
	char name[100];
	
	// Program to convert the case of each character in a name

	// Prompt for the name
	printf("Enter your name:\n");
	gets(name);
	
	// Iterate through each character in the name
	for(i = 0; name[i] != '\0'; i++)
	{
		// Check if the character is uppercase (ASCII range 65-90)
		if(65 <= name[i] && name[i] <= 90)
		{
			// Convert uppercase to lowercase by adding 32
			name[i] += 32;
		}
		// Check if the character is lowercase (ASCII range 97-122)
		else if(97 <= name[i] && name[i] <= 122)
		{
			// Convert lowercase to uppercase by subtracting 32
			name[i] -= 32;
		}
	}
	
	// Print the name in the opposite case
	printf("Your name in opposite case is:\n");
	puts(name);
	
	return 0;
}

