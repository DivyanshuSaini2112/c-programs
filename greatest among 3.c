#include <stdio.h>

int main() {
    int A, B, C;

    printf("Enter number A: ");
    scanf("%d", &A);

    printf("Enter number B: ");
    scanf("%d", &B);

    printf("Enter number C: ");
    scanf("%d", &C);

    if (A > B && A > C)
	{
        printf("The number A is the greatest.\n");
    } 
	else if (B > A && B > C) 
	{
        printf("The number B is the greatest.\n");
    } 
	else if (C > A && C > B) 
	{
        printf("The number C is the greatest.\n");
    }
	else if (A == B && B == C) 
	{
        printf("All numbers are equal.\n");
    } 
	else 
	{
        printf("There are two greatest numbers.\n");
    }
}

