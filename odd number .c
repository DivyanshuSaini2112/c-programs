#include <stdio.h>

int main()
{
	int a;
	int i = 1;
	
	printf("write a number:\n");
	scanf("%d",&a);
	printf("the odd numbers are\n");
	

	do {
		
		printf("%d\n",i);
		i++;
		i++;
	}
	while(i<=a);
}

