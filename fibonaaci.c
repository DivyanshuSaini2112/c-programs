#include <stdio.h>

int main()
{
	int num,i,j=0,k=1,l;
	
	printf("enter a number till you want the series:\n");
	scanf("%d",&num);
	
	printf(" %d %d ",j,k);
	
	for(i=1;i<=num;i++)
	{
		l=j+k;
		printf(" %d ",l);
		
		j=k;
		k=l;
	}
	
	
}
