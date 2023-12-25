#include <stdio.h>

int main(){
	
	int a,b=0;
	int i = 1;
	printf("enter a random number 10 times:\n");
	 while(i <=10 )
	 {
	 	scanf("%d",&a);
	 	b=b+a;
	 	i++;
	 }
	 printf("the sum is %d",b);
}
