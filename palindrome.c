#include <stdio.h>

int main()
{
	
	int num,rev=0,i,num1;
	
	printf("enter a number:\n");
	scanf("%d",&num);
	num1=num;
	
	for(;num!=0;num/=10)
	{
		i=num%10;
		rev=rev*10+i;
	}
	if(num1==rev)
	{
		printf("the number is palindrome");
		
	}
	else{
		printf("the  number is not palindrome ");
	}
	
}
