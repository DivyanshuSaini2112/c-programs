#include <stdio.h>

int main(){
	
    int a;
	long int b;
	int i = 1;
	b = 1;
	
	printf("enter the number to calculate the factorial of:\n");
	scanf("%d",&a);
	
	while(i<=a){
	    b=b*i;
		
		i++;
	}
	printf("the factorial is %ld",b);
}
