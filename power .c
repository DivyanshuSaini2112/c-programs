#include <stdio.h>

int main(){
	int x,y,pow=1;
	int i = 1;
	
	printf("enter number x:\n");
	scanf("%d",&x);
	
	printf("enter number y:\n");
	scanf("%d",&y);
	
	while(i <= y){
		pow = pow*x;
		i++;
	}
	printf("the value of x^y is %d",pow);
	
}
