#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k;
    char user[100], a;

    // Program to arrange characters in a name in lexicographical order

    // Prompt for the name
    printf("Enter your name:\n");
    gets(user);

    k = strlen(user);

    // Bubble sort algorithm to arrange characters in lexicographical order
    for (i = 0; i < k - 1; i++)
    {
        for (j = 0; j < k - i - 1; j++)
        {
            if (user[j] > user[j + 1])
            {
                // Swap characters
                a = user[j];
                user[j] = user[j + 1];
                user[j + 1] = a;
            }
        }
    }

    // Print the name in lexicographical order
    printf("The lexicographical order of your name is:\n");
    puts(user);

    return 0;
}

