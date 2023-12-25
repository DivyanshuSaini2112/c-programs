	#include <stdio.h>
#include <string.h>

int main()
{
    int i, sc = 0, n = 0, Cc = 0, s = 0;
    char x[100];
    
    // Program to count the occurrence of different character types in a name

    // Prompt for the name
    printf("Enter your name:\n");
    gets(x);

    // go through each character in the name
    for(i = 0; x[i] != '\0'; i++)
    {
        if (65 <= x[i] && x[i] <= 90)
            Cc += 1; // Count uppercase letters
        else if (97 <= x[i] && x[i] <= 122)
            sc += 1; // Count lowercase letters
        else if (48 <= x[i] && x[i] <= 57)
            n += 1; // Count numbers
        else
            s += 1; // Count special symbols
    }

    // Print the counts
    printf("Capital letters: %d\n", Cc);
    printf("Small letters: %d\n", sc);
    printf("Numbers: %d\n", n);
    printf("Special symbols: %d\n", s);

    return 0;
}

