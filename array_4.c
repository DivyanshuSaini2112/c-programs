#include <stdio.h>

int main()
{
	int array[100],i,a,b,c;
	
	printf("enter 10 random numbers:\n");
	
	for(i=0;i<=9;i++)
	{
		scanf("%d",&array[i]);
		
	}
	
	printf("enter the position at which you want to insert the value(0-9):\n");
	scanf("%d",&a);
	
	if(a<0||a>9)
	{
		printf("invalid position !");
		
	}
	
	printf("enter the value to be inserted:\n");
	scanf("%d",&b);
	
	for(i=9;i>=a;i--)
	{
		array[i+1]=array[i];
	}
	
	array[a]=b;
	
	printf("array after inserting the value is:\n");
	for(i=0;i<=10;i++)
	{
		printf(" %d ",array[i]);
	}
	
}
