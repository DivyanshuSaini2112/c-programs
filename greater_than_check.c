#include <stdio.h>

int main()
{
	
	int A,B;
	printf("enter a number A:");
	scanf("%d",&A);
	
	printf("enter a number B:");
	scanf("%d",&B);
	
	if(A>B){
		printf("the number A is greater than number B");
	}
	else if(A == B){
		printf("number A and B are equal");
	}	
	else{
		printf("the number B is greater than number A");
	}
}
