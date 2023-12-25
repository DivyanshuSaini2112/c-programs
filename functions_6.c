#include <stdio.h>

int pattern();

int main()
{
	int n,i,j,k;
	printf("enter a number :");
	scanf("%d",&n);
	pattern(n);
}

int pattern(n)
{
	int i,j,k;
	for(i=0;i<=n;i++)
	{
		printf("* ");
	}
	printf("\n");
	for(i=0;i<=n;i++)
	{
		printf("@ ");
	}
	printf("\n");
	for(i=0;i<=n;i++)
	{
		printf("# ");
	}
	
}
