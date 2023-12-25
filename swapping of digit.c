#include <stdio.h>
//with using third variable
void main()
{
	int a,b,c ;
	printf("enter number a:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	
	c = a;
	a = b;
	b = c;
	
	printf("after swapping the number a is %d and number b is %d",a,b);
}
