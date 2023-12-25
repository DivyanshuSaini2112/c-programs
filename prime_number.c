#include <stdio.h>

int main(){
	int i = 1;
	int a;
	printf("enter a number:\n");
	scanf("%d",&a);
	
	do{
		if((i%1==0) && (i%i==0))
		{
			printf("%d\n",i);
		}
		i++;
	}
	while(i<=a);
}
