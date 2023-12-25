#include <stdio.h>

int area();

int main()
{
	int result;
	
	result = area();
	printf("the area of circle of radius is :\n");
	printf("%d",result);
	
}
int area()
{
	int r,a,b;
	printf("enter the radius of the circle :\n");
	scanf("%d",&r);
	return 3.14*r*r;
	
}
