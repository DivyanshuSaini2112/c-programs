#include <stdio.h>

int main(){
	int a;
	int b = 0;
	int i = 1;
	
	printf("enter a number:\n");
	scanf("%d",&a);
	
	while(i<=a){
		b += i;
		i++;
	}
	printf("the sum of natural number is %d",b);
}
