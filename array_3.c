#include <stdio.h>

int main()
{
	int array[10],i,max,min;
	
	printf("enter 10 random numbers:\n");
	
	for(i=0;i<=9;i++)
	{
		scanf("%d",&array[i]);
		
	}
	
	max=min=array[0];
	for(i=1;i<=9;i++)
	{
		if(max<array[i])
		{
			max=array[i];
		}
		else if(min>array[i])
		{
			min=array[i];
		}
	}
	
	printf("the maximum value of array is %d\n",max);
	printf("the minimum value of array is %d\n",min);
}
