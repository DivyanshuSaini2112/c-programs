+#include <stdio.h>

int main()
{
	int num,sum,i,a;
	
	printf("enter a number");
	scanf("%d",&num);
	
	for(;num!=0;num/=10)
	{
		a=num%10;
		sum+=a;
	}
	printf("the sum of the digits is %d",sum);
}
