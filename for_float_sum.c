#include <stdio.h>

int main()
{
	int i,num;
	float a=0.0;
	
	printf("enter a number:\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		printf("i");
		a+=1.0/i;
	}
	printf("the sum is %f",a);
}
