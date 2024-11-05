#include <stdio.h>

struct entries
{
    int ph, rollno;
    char name[50], address[50];
    float income;
} e1;

int main()
{
    printf("Enter the details as asked:\nEnter your name:\nAddress:\nPhone no.:\nIncome:\n");
    scanf("%s %s %d %f", e1.name, e1.address, &e1.ph, &e1.income);

    printf("\nYour details are:\nName: %s\nPhone no.: %d\nAddress: %s\nIncome: %f\n", e1.name, e1.ph, e1.address, e1.income);

    return 0;
}

