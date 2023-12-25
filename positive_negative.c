#include<stdio.h>

int main()
{
int i;
printf("Enter a no.:");
scanf("%d",&i);
	if(i==0)
printf("Number is neutral");
	else if(i>0)
	printf("No. is positive");
	else
	printf("No. is negative");
}

