#include <stdio.h>

int main()
{
	int array[10],i;
	
	printf("enter 10 random numbers:\n");
	
	for(i=0;i<=9;i++)
	{
		scanf("%d",&array[i]);
		
	}
	printf("the values are:\n");
	
	for(i=0;i<=9;i++)
	{
		printf(" %d ",array[i+1]);
	}
	
}
