#include <stdio.h>

int main()
{
	int array[10],i;
	
	printf("enter 10 random numbers:\n");
	
	for(i=0;i<=9;i++)
	{
		scanf("%d",&array[i]);
		
	}
	printf("the numbers in reverse order are:\n");
	
	for(i=9;i>=0;i--)
	{
		printf(" %d ",array[i]);
	}
}
