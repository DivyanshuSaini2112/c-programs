#include <stdio.h>

int main()
{
	
	int n,rev=0,a;
	
	printf("enter a number:\n");
	scanf("%d",&n);
	
	for(;n!=0;n/=10){
		
		a=n%10;
		rev=rev*10+a;
	}
	printf("the reverse is %d",rev);
}

