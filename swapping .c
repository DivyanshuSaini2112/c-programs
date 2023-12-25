#include <stdio.h>

void main()
{
	int a,b;
	
	printf("enter number a:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("after swapping the number a is %d and b is %d",a,b);
}
