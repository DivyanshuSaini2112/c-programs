#include <stdio.h>

int main() {
    int c;
    printf("Enter a character:\n"); // Prompt the user to enter a character
    scanf("%c", &c); // Read a character from the user
    
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        // Check if the input is an alphabet character
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel with ASCII value %d\n", c, c);
                break;
            default:
                printf("%c is a consonant with ASCII value %d\n", c, c);
                break;
        }
    } else if (c >= '0' && c <= '9') {
        // Check if the input is a digit
        printf("%c is an integer with ASCII value %d. !!!PLEASE ENTER A VALID CHARACTER!!!\n", c, c);
    } else {
        // The input is neither an alphabet character nor a digit, so it's considered a special symbol
        printf("%c is a special symbol with ASCII value %d. !!!PLEASE ENTER A VALID CHARACTER!!!\n", c, c);
    }

    return 0;
}

