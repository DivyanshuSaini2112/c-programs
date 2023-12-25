#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char name[100], copy[100];

    // Program to copy a name to another string

    // Prompt for the name
    printf("Enter your name:\n");
    gets(name);

    // Copy each character from the name to the copy string
    for (i = 0; name[i] != '\0'; i++)
    {
        copy[i] = name[i];
    }
    
    // Add the null terminator to the end of the copy string
    copy[i] = '\0';

   

