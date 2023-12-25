#include <stdio.h>

int sum(int a,int b)
{
	printf("the sum is = %d",a+b);
}

int main()
{
	int a,b,result;
	
	printf("enter two numbers :\n");
	scanf("%d%d",&a,&b);
	
	sum(a,b);
}
