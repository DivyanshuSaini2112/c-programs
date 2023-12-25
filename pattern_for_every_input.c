#include <stdio.h>

int main()
{
    int k, l, m;
    char i, j;
    
    // Program to print different patterns based on user's choice
    
    // Prompt for the choice
    printf("Enter your choice:\nPress 1 to print pattern in alphabets\nPress 2 to print pattern in numbers\nPress 3 to print pattern in stars or special symbols\n");
    scanf("%d", &k);
    
    switch (k)
    {
        case 1:
            printf("Enter an Alphabet:\n");
            scanf(" %c", &i);
            
            if (i >= 'A' && i <= 'Z')
            {
                // Print pattern with uppercase alphabets
                for (; i >= 'A'; i--)
                {
                    for (j = 'A'; j <= i; j++)
                    {
                        printf("%c", j);
                    }
                    printf("\n");
                }
            }
            else if (i >= 'a' && i <= 'z')
            {
                // Print pattern with lowercase alphabets
                for (; i >= 'a'; i--)
                {
                    for (j = 'a'; j <= i; j++)
                    {
                        printf("%c", j);
                    }
                    printf("\n");
                }
            }
            break;
            
        case 2:
            printf("Enter a number to determine the pattern:\n");
            scanf("%d", &l);
            
            // Print pattern with numbers
            for (; l >= 1; l--)
            {
                for (m = 1; m <= l; m++)
                {
                    printf("%d", m);
                }
                printf("\n");
            }
            break;
            
        case 3:
            printf("Enter a symbol to print the pattern:\n");
            scanf(" %c", &i);
            
            printf("Enter how many rows of pattern you want:\n");
            scanf("%d", &l);
            
            // Print pattern with stars or special symbols
            for (m = 1; m <= l; m++)
            {
                for (j = 1; j <= m; j++)
                {
                    printf("%c", i);
                }
                printf("\n");
            }
            break;
            
        default:
            printf("Enter a valid choice\n");
            break;
    }
    
    return 0;
}


