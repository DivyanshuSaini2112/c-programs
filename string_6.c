#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k;
    char user1[100], user2[100], user3[100], user4[100];

    // Prompt for the first name
    printf("Enter your first name:\n");
    gets(user1);

    // Calculate the length of the first name
    i = strlen(user1);
    printf("Length of name: %d\n", i);
	//printf("size of input string is %d\n",sizeof(user1));
    // Prompt for the second name
    printf("Enter your second name:\n");
    gets(user2);

    // Concatenate the first and second names
    strcat(user1, user2);

    // Print the concatenated name
    puts(user1);

    // Copy the concatenated name to the third string
    strcpy(user3, user1);

    // Print the name stored in the third string
    printf("Name in the third string:\n");
    puts(user3);

    // Prompt for the friend's name
    printf("Enter your friend's name:\n");
    gets(user4);

    // Compare the friend's name with the name in the third string
    printf("Compare strings: %d\n", strcmp(user4, user3));

    return 0;
}

